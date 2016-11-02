/*
 * CommandLineUserInterface.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef COMMANDLINEUSERINTERFACE_H_
#define COMMANDLINEUSERINTERFACE_H_

#include "UserInterfaceI.h"

class CommandLineUserInterface : public UserInterfaceI
{
public:
	CommandLineUserInterface();
	~CommandLineUserInterface();
public:
void writeString();
void readString();
std::string getString();
void setString(std::string&);
private:
std::string userInterfaceString;
};

#endif /* COMMANDLINEUSERINTERFACE_H_ */
