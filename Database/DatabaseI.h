/*
 * DatabaseI.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef DATABASEI_H_
#define DATABASEI_H_

#include <fstream>
#include <string>

class DatabaseI
{
private:
protected:
public:
	DatabaseI(){}
	virtual ~DatabaseI(){}
public:
  virtual std::string getDatabase()=0;
  virtual void setDatabase(std::string)=0;
  virtual void writeDatabase()=0;
  virtual void readLineDatabase()=0;
  virtual void readDatabase(char&)=0;
};



#endif /* DATABASEI_H_ */
