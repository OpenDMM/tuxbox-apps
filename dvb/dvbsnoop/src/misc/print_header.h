/*
$Id$


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de (rasc)



*/

#ifndef __PRINT_HEADER_H
#define __PRINT_HEADER_H 

#include "misc/cmdline.h"


void  print_packet_header (OPTION *opt, char *packetTyp, u_int pid, int count, int length);


#endif


