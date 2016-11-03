/*
 * DLLDatabase_test.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include <iostream>

#include "DLLDatabase.h"


int main()
{
std::cout << "TEST START" << std::endl;

DLLDatabase DLLDatabaseTestObject;
DLLDatabaseTestObject.writeDatabase();
DLLDatabaseTestObject.writeDatabase();
char tempChar = '.';
DLLDatabaseTestObject.readDatabase(tempChar);
std::cout << std::endl <<"TEST END" << std::endl;
}
