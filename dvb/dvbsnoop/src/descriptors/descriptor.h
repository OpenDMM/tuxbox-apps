/*
$Id$ 


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de (rasc)


 -- Descriptors Section

*/


#ifndef __DESCRIPTOR_H
#define __DESCRIPTOR_H


// Descriptor tag space/scope...
typedef enum {
	MPEG, DVB_SI,
	DSMCC_STREAM, DSMCC_CAROUSEL, DSMCC_INT_UNT, MHP_AIT, TVA_RNT
} DTAG_SCOPE;


int   descriptor (u_char *b, DTAG_SCOPE s);
void  descriptor_any (u_char *b);


#endif


