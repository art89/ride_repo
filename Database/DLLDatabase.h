/*
 * DLLDatabase.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef DLLDATABASE_H_
#define DLLDATABASE_H_

#include <iostream>

#include "DatabaseI.h"

class DLLDatabase : public DatabaseI
{
public:
	DLLDatabase ();
	~DLLDatabase ();
public:
	std::string getDatabase();
	void setDatabase(std::string);
	void writeDatabase();
	void readLineDatabase();
	void readDatabase(char&);
private:
std::ofstream outputStream;
std::ifstream inputStream;
};

#endif /* DLLDATABASE_H_ */
