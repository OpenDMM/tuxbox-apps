/*
 * $Header$
 */

#include <string>

#include "xml/xmltree.h"


std::string convertForXML(const std::string s);
std::string Utf8_to_Latin1(const std::string s);

XMLTreeParser* parseXmlFile(const std::string filename);
