/*
$Id$


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de


 -- String table misc.

*/

#include "strtable_misc.h"

/*
  -- match id in range from STR_TABLE
*/

char *findTableID (STR_TABLE *t, u_int id)

{

  while (t->str) {
    if (t->from <= id && t->to >= id)
       return (char *) t->str;
    t++;
  }

  return (char *) ">>ERROR: not (yet) defined... Report!<<";
}





