/*
$Id$

 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de (rasc)



*/




#ifndef __SECTABLES_H
#define __SECTABLES_H 


void processSI_packet (u_int pid, long packet_nr, u_char *b, int len);
void decodeSI_packet (u_char *buf, int len, u_int pid);


#endif





