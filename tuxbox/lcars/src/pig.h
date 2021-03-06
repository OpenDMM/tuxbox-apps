/***************************************************************************
    copyright            : (C) 2001 by TheDOC
    email                : thedoc@chatville.de
	homepage			 : www.chatville.de
	modified by			 : -
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
$Log$
Revision 1.7  2003/01/05 19:28:45  TheDOC
lcars should be old-api-compatible again

Revision 1.6  2002/06/02 12:18:47  TheDOC
source reformatted, linkage-pids correct, xmlrpc removed, all debug-messages removed - 110k smaller lcars with -Os :)

Revision 1.5  2002/05/18 02:55:24  TheDOC
LCARS 0.21TP7

Revision 1.3  2002/03/03 22:57:59  TheDOC
lcars 0.20

Revision 1.2  2001/12/16 22:36:05  tux
IP Eingaben erweitert

Revision 1.2  2001/11/15 00:43:45  TheDOC
 added

*/
#ifndef PIG_H
#define PIG_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>

class pig
{
	int fd;
public:
	pig();
	~pig();
	void show();
	void hide();
	void setSize(int x, int y);
	void setPosition(int x, int y);
	void setStack(int i);
	void setSource(int x1, int y1, int x2, int y2);
};

#endif
