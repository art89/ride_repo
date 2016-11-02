/*
 * DateI.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef DATEI_H_
#define DATEI_H_

#include <string>

class DateI
{
    public:
virtual std::string getDate()=0;
virtual void setDate(std::string)=0;
virtual bool verifyDate(std::string){return false;}

DateI() {}
virtual ~DateI() {}

protected:
private:
};



#endif /* DATEI_H_ */
