/*
$Id$


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2004   Rainer.Scherg@gmx.de (rasc)


 -- misc routines for EBU teletext



*/

#ifndef _TELETEXT_H_
#define _TELETEXT_H_


u_char unham84 (u_char a, u_char b);
void   unParityTeletextData (u_char *b, int len);

u_char invertChar (u_char *b);
void   invertBuffer (u_char *b, int len);

int    print_teletext_control_decode (int v, u_char *b, int max_len);



#endif


