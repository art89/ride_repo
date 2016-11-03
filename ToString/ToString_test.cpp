/*
 * ToString_test.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include <iostream>
#include <string>

#include "ToString.h"

int main()
{
std::cout << "TEST START" << std::endl;
std::string tempStringObject = ToString::intToString(5);
std::cout << tempStringObject << std::endl;

std::cout << "TEST END" << std::endl;
}
