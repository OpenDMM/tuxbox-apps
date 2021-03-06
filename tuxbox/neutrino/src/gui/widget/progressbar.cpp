/*
 * $Id:$
 *
 * (C) 2008 by dbt <info@dbox2-tuning.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <global.h>
#include <neutrino.h>

#include "icons.h"
#include "progressbar.h"

#define ITEMW 4
#define POINT 2

CProgressBar::CProgressBar(const bool bl, const int w, const int h,
			   const int r, const int g, const int b, const bool inv)
{
	frameBuffer 	= CFrameBuffer::getInstance();
	font_pbar = SNeutrinoSettings::FONT_TYPE_INFOBAR_SMALL;
	
	// frame width around active bar
	frame_widht = 2;		
	blink = bl;
	invert = inv;
	red = r;
	green = g;
	yellow = b;
	width = w;
	height = h;
	last_width = -1;
	bl_changed = g_settings.progressbar_color;
}

CProgressBar::~CProgressBar()
{

}

void CProgressBar::paintProgressBar (	const int pos_x, 
					const int pos_y,
					const int pb_width,
					const int pb_height,
					const int value,
					const int max_value,	
					const fb_pixel_t activebar_col,
					const fb_pixel_t passivebar_col,
					const fb_pixel_t backgroundbar_col,
					const fb_pixel_t shadowbar_col,
					const char * upper_labeltext,
					const uint8_t uppertext_col,
					const char * iconfile,
					bool paintZero)
{
	width = pb_width;
	height = pb_height;
	realpaint(pos_x, pos_y, value, max_value,
		  activebar_col, passivebar_col, backgroundbar_col, shadowbar_col,
		  upper_labeltext, uppertext_col, iconfile, paintZero);
}

void CProgressBar::paintProgressBar2(const int pos_x, const int pos_y,
				     const int value, const int max_value,
				     const fb_pixel_t activebar_col, const fb_pixel_t passivebar_col,
				     const fb_pixel_t frame_col, const fb_pixel_t shadowbar_col,
				     const char * upper_labeltext, const uint8_t uppertext_col,
				     const char * iconfile, bool paintZero)
{
	if (height < 0 || width < 0)
	{
		fprintf(stderr, "CProgressBar::paintProgressBar2 height or width not set!\n");
		return;
	}
	realpaint(pos_x, pos_y, value, max_value,
		  activebar_col, passivebar_col, frame_col, shadowbar_col,
		  upper_labeltext, uppertext_col, iconfile, paintZero);
}

void CProgressBar::realpaint(const int pos_x, const int pos_y,
			     const int value, const int max_value,
			     const fb_pixel_t activebar_col,
			     const fb_pixel_t passivebar_col,
			     const fb_pixel_t backgroundbar_col,
			     const fb_pixel_t shadowbar_col,
			     const char *upper_labeltext,
			     const uint8_t uppertext_col,
			     const char *iconfile,
			     bool paintZero)
{
	
	// set colors
	fb_pixel_t active_col = activebar_col != 0 ? activebar_col : COL_INFOBAR_PLUS_7;
	fb_pixel_t passive_col = passivebar_col != 0 ? passivebar_col : COL_INFOBAR_PLUS_3;
	
	int c_rad = RADIUS_SMALL;								

	/* if the bar is too small, do not draw the borders around it */
	if (height / 2 <= frame_widht || (blink && g_settings.progressbar_color) || backgroundbar_col == 0)
		frame_widht = 0;							
	
	// get icon size
	int icon_w = 0, icon_h = 0;
	if (iconfile != NULL)
		frameBuffer->getIconSize(iconfile, &icon_w, &icon_h);


	// start positions x/y active bar
	int start_x = icon_w != 0 ? pos_x  + icon_w + 2*frame_widht : pos_x + frame_widht;		
	int start_y = pos_y + frame_widht;
	
	// width active bar for current value
	int active_pb_width = (width - icon_w - 2*frame_widht) * value/max_value;	
	
	// max width active/passive bar	
	int pb_max_width = icon_w != 0 ? (width - 2*frame_widht) - icon_w - frame_widht : width - 2*frame_widht ;

	// max height progressbar bar, if icon height larger than pb_height then get height from icon
	int pb_max_height = icon_h > height ? icon_h + 2* frame_widht : height;
	
	// max height of active/passive bar
	int bar_height = pb_max_height - 2*frame_widht;

	if (!blink || !g_settings.progressbar_color)
	{
		// start_x passive bar
		int start_x_passive_bar = start_x + active_pb_width;
	
		// width passive bar	
		int width_passive_bar =  pb_max_width - active_pb_width;		
	
		// shadow
		if (shadowbar_col !=0)
			frameBuffer->paintBoxRel(pos_x+SHADOW_OFFSET,pos_y+SHADOW_OFFSET, width, pb_max_height, shadowbar_col, c_rad); // shadow
	
		// background = frame
		if (backgroundbar_col != 0){
			// we must paint background as frame, because of flicker effects at screen on fast changing values
			frameBuffer->paintBoxRel(pos_x,pos_y, 10, pb_max_height, backgroundbar_col, c_rad, CORNER_LEFT);
			frameBuffer->paintBoxRel(pos_x+width-10,pos_y, 10, pb_max_height, backgroundbar_col, c_rad, CORNER_RIGHT);
			frameBuffer->paintBoxRel(pos_x+10,pos_y, width-20, frame_widht, backgroundbar_col);
			frameBuffer->paintBoxRel(pos_x+10,pos_y+pb_max_height-frame_widht, width-20, frame_widht, backgroundbar_col);
		}

		frameBuffer->paintBoxRel(start_x,  start_y, active_pb_width, bar_height, active_col); // active bar
		frameBuffer->paintBoxRel(start_x_passive_bar, start_y, width_passive_bar, bar_height, passive_col); // passive bar
		if ((paintZero) && (value ==0))
			frameBuffer->paintLine(pos_x+2 , pos_y+2, pos_x+width-3, pos_y+height-3, active_col); // zero line
	}
	else
	{
		/* red, yellow, green are given in percent */
		int rd = red * width / (100 * ITEMW);		/* how many POINTs red */
		int yw = yellow * width / (100 * ITEMW);	/* how many POINTs yellow */
		int gn = green * width / (100 * ITEMW);		/* how many POINTs green */

		int maxi = active_pb_width / ITEMW;	/* how many POINTs is the active bar */
		int total = width / ITEMW;		/* total number of POINTs */

		int i, j;
		uint32_t rgb;

		if (last_width == -1 && backgroundbar_col != 0) /* first paint */
		{
			// shadow
			if (shadowbar_col != 0)
				frameBuffer->paintBoxRel(pos_x + SHADOW_OFFSET, pos_y + SHADOW_OFFSET, width, pb_max_height, shadowbar_col);

			// background
			frameBuffer->paintBoxRel(pos_x, pos_y, width, pb_max_height, backgroundbar_col);
		} 

		if (active_pb_width != last_width) 
		{
			if (active_pb_width > last_width) 
			{
				for (i = 0; (i < rd) && (i < maxi); i++) 
				{ //green section
					if (invert)
						rgb = COL_LIME;
					else
						rgb = COL_RED;
					
					frameBuffer->paintBoxRel(pos_x + i * ITEMW, start_y, POINT, bar_height, rgb);
				}
				for (; (i < yw) && (i < maxi); i++) 
				{ //yello section
					rgb = COL_YELLOW;
					
					frameBuffer->paintBoxRel(pos_x + i * ITEMW, start_y, POINT, bar_height, rgb);
				}
				for (; (i < gn) && (i < maxi); i++) 
				{ //red section
					if (invert)
						rgb = COL_RED;
					else
						rgb = COL_LIME;
					
					frameBuffer->paintBoxRel(pos_x + i * ITEMW, start_y, POINT, bar_height, rgb);
				}
			}
			for (i = maxi; i < total; i++) 
				frameBuffer->paintBoxRel(pos_x + i * ITEMW, start_y, POINT, bar_height, COL_INFOBAR_PLUS_3); //fill passive

			last_width = active_pb_width;
 		}	
 	}

	// paint icon if present
	if (iconfile != NULL)
	{		
		int icon_y = pos_y + (pb_max_height/2) - (icon_h/2);
		frameBuffer->paintIcon(iconfile, pos_x + frame_widht, icon_y);
	}
					
	// upper text
	int upper_labeltext_y = start_y - frame_widht ;
	if (upper_labeltext != NULL) 	
	{		
		g_Font[font_pbar]->RenderString( start_x +2,
						upper_labeltext_y,
						width,
						upper_labeltext,
						uppertext_col != 0 ? uppertext_col : COL_INFOBAR,
						height,
						true); // UTF8
	}	
}


void CProgressBar::paintProgressBarDefault (	const int pos_x, 
						const int pos_y,
						const int pb_width,
						const int pb_height,
						const int value,
						const int max_value)
{
	paintProgressBar (pos_x, pos_y, pb_width, pb_height, value, max_value, 0, 0, COL_INFOBAR_SHADOW_PLUS_1, 0, "", 0);
}
