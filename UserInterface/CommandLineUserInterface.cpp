/*
 * CommandLineUserInterface.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "CommandLineUserInterface.h"

CommandLineUserInterface::CommandLineUserInterface()
: userInterfaceString("")
{
	// TODO Auto-generated constructor stub

}

CommandLineUserInterface::~CommandLineUserInterface()
{
	// TODO Auto-generated destructor stub
}

void CommandLineUserInterface::setString(std::string& tempString)
{
userInterfaceString = tempString;
}

std::string CommandLineUserInterface::getString()
{
return userInterfaceString;
}

void CommandLineUserInterface::writeString()
{
std::cin >> userInterfaceString;
}

void CommandLineUserInterface::readString()
{
std::cout << userInterfaceString;
}
