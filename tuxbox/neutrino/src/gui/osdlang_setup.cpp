/*
	$Id$

	OSD-Language Setup  implementation - Neutrino-GUI

	Copyright (C) 2001 Steffen Hehn 'McClean'
	and some other guys
	Homepage: http://dbox.cyberphoria.org/

	Copyright (C) 2010 T. Graf 'dbt'
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

*/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#include "osdlang_setup.h"

#include <global.h>
#include <neutrino.h>

#include <gui/widget/icons.h>

#include <driver/screen_max.h>

#include <system/debug.h>

#include <algorithm>
#include <dirent.h>



COsdLangSetup::COsdLangSetup()
{
	width = w_max (500, 100);
	selected = -1;
}

COsdLangSetup::~COsdLangSetup()
{

}


int COsdLangSetup::exec(CMenuTarget* parent, const std::string &/*actionKey*/)
{
	dprintf(DEBUG_DEBUG, "init font setup\n");

	if(parent != NULL)
		parent->hide();

	showSetup();
	
	return menu_return::RETURN_REPAINT;	
}


void COsdLangSetup::showSetup()
{
	CMenuWidget *osdl_setup = new CMenuWidget(LOCALE_LANGUAGESETUP_HEAD, NEUTRINO_ICON_LANGUAGE, width);
	osdl_setup->setPreselected(selected);

	osdl_setup->addItem(GenericMenuSeparator);
	osdl_setup->addItem(GenericMenuBack);
	osdl_setup->addItem(GenericMenuSeparatorLine);

	COsdLangNotifier osdLangNotifier;

	//search available languages....

	struct dirent **namelist;
	int n;
	//		printf("scanning locale dir now....(perhaps)\n");

	const char *pfad[] = {DATADIR "/neutrino/locale","/var/tuxbox/config/locale"};

	for(int p = 0;p < 2;p++)
	{
		n = scandir(pfad[p], &namelist, 0, alphasort);
		if(n < 0)
		{
			perror("loading locales: scandir");
		}
		else
		{
			for(int count=0;count<n;count++)
			{
				char * locale = strdup(namelist[count]->d_name);
				char * pos = strstr(locale, ".locale");
				if(pos != NULL)
				{
					*pos = '\0';
					CMenuOptionLanguageChooser* oj = new CMenuOptionLanguageChooser((char*)locale, &osdLangNotifier);
					oj->addOption(locale);
					osdl_setup->addItem( oj );
				}
				else
					free(locale);
				free(namelist[count]);
			}
			free(namelist);
		}
	}

	osdl_setup->exec(NULL, "");
	osdl_setup->hide();
	selected = osdl_setup->getSelected();
	delete osdl_setup;
}


bool COsdLangNotifier::changeNotify(const neutrino_locale_t, void * /*Data*/)
{
	bool ret = false;

	int unicode_locale = g_Locale->loadLocale(g_settings.language);
	ret = CNeutrinoApp::getInstance()->ChangeFonts(unicode_locale);

	return ret;
}

