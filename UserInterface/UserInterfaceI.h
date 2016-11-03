/*
 * UserInterfaceI.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef USERINTERFACEI_H_
#define USERINTERFACEI_H_

#include <iostream>

class UserInterfaceI
{
public:
	UserInterfaceI(){};
  virtual ~UserInterfaceI(){};
public:
virtual void writeString()=0;
virtual void readString()=0;
virtual void setString(std::string&)=0;
virtual std::string getString()=0;
};



#endif /* USERINTERFACEI_H_ */
