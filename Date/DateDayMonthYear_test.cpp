/*
 * DateDayMonthYear_test.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include <iostream>

#include "DateDayMonthYear.h"

int
main ()
{
	std::cout << "TEST START" << std::endl;

	DateDayMonthYear testObject;
	std::cout << testObject.getDate () << std::endl;
	testObject.setDate ("00-00-0000");
	std::cout << testObject.getDate () << std::endl;
	std::cout << "TEST END" << std::endl;

}
