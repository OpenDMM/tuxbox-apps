#!/bin/sh
# --------------------------------------------------------
# $Date$
# $Revision$ yjogol
# Pruefung bei Argumentuebergaben
# --------------------------------------------------------

if [ "$#" -eq 0 ]
then
	echo "Der gepatchte WebServer laeuft nicht !!!"
	echo "Muss er aber fuer diese Funktion ..."
	echo "Siehe auch: Tools - Test ..."
	exit 1
fi
