/*
 * CommandLineUserInterface_test.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "CommandLineUserInterface.h"

int main()
{
std::cout << "TEST START" << std::endl;

CommandLineUserInterface tempComLiUserInterObject;
tempComLiUserInterObject.writeString();
tempComLiUserInterObject.readString();
std::string tempString = "no_new_line";
tempComLiUserInterObject.setString(tempString);
std::cout << tempComLiUserInterObject.getString() << std::endl;

std::cout << "TEST END" << std::endl;
}
