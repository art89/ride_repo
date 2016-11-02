/*
 * ToString.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "ToString.h"

std::string ToString::intToString (int tempInt)
{
	std::stringstream tempString;
	tempString << tempInt;
	return tempString.str ();
}

ToString::ToString ()
{
	// TODO Auto-generated constructor stub

}

ToString::~ToString ()
{
	// TODO Auto-generated destructor stub
}

