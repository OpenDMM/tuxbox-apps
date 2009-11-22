/*
$Id$


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de (rasc)

*/


#ifndef __PID_MEM
#define __PID_MEM



void init_PidMemory (void);
int  store_PidToMem (int pid);
int  get_UnusedPidFromMem (void);
void mark_PidMem_as_used (int pid);


#endif


