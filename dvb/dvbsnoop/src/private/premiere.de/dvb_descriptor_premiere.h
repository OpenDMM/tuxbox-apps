/*
$Id$ 


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de (rasc)


 -- private DVB Descriptors  Premiere.de

*/


#ifndef _PREMIERE_DVB_DESCRIPTOR_H
#define _PREMIERE_DVB_DESCRIPTOR_H 


void descriptor_PRIVATE_PremiereDE_ContentOrder (u_char *b);
void descriptor_PRIVATE_PremiereDE_ParentalInformation (u_char *b);
void descriptor_PRIVATE_PremiereDE_ContentTransmission (u_char *b);


#endif

