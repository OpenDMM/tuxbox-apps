/*
 *  $Id$
 */

#ifndef __scan_h__
#define __scan_h__

#include <linux/dvb/frontend.h>

#include <inttypes.h>

#include <map>
#include <string>

#include "bouquets.h"

#include "getservices.h"

typedef transponder_list_t::iterator stiterator;

extern CBouquetManager* scanBouquetManager;

char * getFrontendName();

#endif /* __scan_h__ */
