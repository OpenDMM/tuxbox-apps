/*
 * $Id$
 *
 * (C) 2005 by digi_casi <digi_casi@tuxbox.org>
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
 
#ifndef __enigma_dyn_epg_h
#define __enigma_dyn_epg_h

class eHTTPDynPathResolver;
void ezapEPGInitializeDyn(eHTTPDynPathResolver *dyn_resolver, bool lockWeb);
eString getServiceEPG(eString format, eString opts);
eString getEITC(eString result, eString format);

#endif /* __enigma_dyn_epg_h */
