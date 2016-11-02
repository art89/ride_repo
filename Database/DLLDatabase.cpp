/*
 * DLLDatabase.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "DLLDatabase.h"

DLLDatabase::DLLDatabase ()
{
	// TODO Auto-generated constructor stub

}

DLLDatabase::~DLLDatabase ()
{
	// TODO Auto-generated destructor stub
}

std::string DLLDatabase::getDatabase ()
{
	std::string tempString;
	inputStream.open ("Database.txt");
	inputStream >> tempString;
	inputStream.close ();
	return tempString;
}

void DLLDatabase::setDatabase (std::string tempString)
{
	outputStream.open ("Database.txt");
	outputStream << tempString;
	outputStream.close ();
}

void DLLDatabase::writeDatabase ()
{
	std::string tempString;
	std::cin >> tempString;
	outputStream.open ("Database.txt", std::ios::app);
	outputStream << tempString << "\n";
	outputStream.close ();
}

void DLLDatabase::readLineDatabase ()
{
	std::string tempString;
	inputStream.open ("Database.txt");
	std::getline(inputStream, tempString);
	inputStream.close ();
	std::cout << tempString;
}

void DLLDatabase::readDatabase (char& readUntilChar)
{
	std::string tempString;
	inputStream.open("Database.txt");
	std::getline(inputStream, tempString, readUntilChar);
	inputStream.close();
	std::cout << tempString;
}
