/*
 * DateDayMonthYear.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "DateDayMonthYear.h"

DateDayMonthYear::DateDayMonthYear() : fullDate("EMPTY"){
	// TODO Auto-generated constructor stub

}

DateDayMonthYear::~DateDayMonthYear() {
	// TODO Auto-generated destructor stub
}

std::string DateDayMonthYear::getDate()
{
return this->fullDate;
}

void DateDayMonthYear::setDate(std::string settingDate)
  {
  if(verifyDate(settingDate) == true)
    {
    this->fullDate = settingDate;
    }
  }

bool DateDayMonthYear::verifyDate(std::string settingDate)
{
  bool isValid = false;
  std::string dateByParts[3];
  if(settingDate.length() == 10 && settingDate.at(2) == '-' && settingDate.at(5) == '-')
    {
    isValid = true;
    int intIter = 0;

    for(std::string::iterator iter = settingDate.begin(); iter <= settingDate.end(); iter++)
      {
      if(intIter < 10 && intIter != 2 && intIter != 5 && settingDate.at(intIter) != '0' && settingDate.at(intIter) != '1' && settingDate.at(intIter) != '2' && settingDate.at(intIter) != '3' && settingDate.at(intIter) != '4' && settingDate.at(intIter) != '5' && settingDate.at(intIter) != '6' && settingDate.at(intIter) != '7' && settingDate.at(intIter) != '8' && settingDate.at(intIter) != '9')
        {
        isValid = false;
        }
      intIter++;
      }
    }
return isValid;
 }
