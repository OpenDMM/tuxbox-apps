/*
	$Id$

	Movieplayer menue - Neutrino-GUI

	Copyright (C) 2001 Steffen Hehn 'McClean'
	and some other guys
	Homepage: http://dbox.cyberphoria.org/

	Copyright (C) 2009 T. Graf 'dbt'
	Homepage: http://www.dbox2-tuning.net/

	License: GPL

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

	$Log$
	Revision 1.1  2009/11/09 13:05:09  dbt
	menue cleanup:
	parentallock, movieplayer_menue and network-setup for it's own modules
	
*/

#ifndef __movieplayer_menue__
#define __movieplayer_menue__

#include <gui/widget/menue.h>

#include <driver/framebuffer.h>

#include "movieplayer.h"
#ifdef ENABLE_MOVIEBROWSER
#include "moviebrowser.h"
#endif

#include <string>

class CMoviePlayerMenue : public CMenuTarget
{
	private:
		CFrameBuffer *frameBuffer;

		int x, y, width, height, hheight, mheight;

		void hide();
		void showMoviePlayerMenue();

		CMenuTarget* 			moviePlayerGui;
#ifdef ENABLE_MOVIEBROWSER
		CMenuTarget*			movieBrowser;
#endif

	public:	
		CMoviePlayerMenue();
		~CMoviePlayerMenue();
		int exec(CMenuTarget* parent, const std::string & actionKey);
};


#endif