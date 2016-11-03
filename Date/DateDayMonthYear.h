/*
 * DateDayMonthYear.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef DATEDAYMONTHYEAR_H_
#define DATEDAYMONTHYEAR_H_

#include <string>

#include "DateI.h"

class DateDayMonthYear: public DateI {
public:
	DateDayMonthYear();
	~DateDayMonthYear();
private:
	std::string fullDate;
protected:
	bool verifyDate(std::string);
public:
	std::string getDate();
	void setDate(std::string);
};

#endif /* DATEDAYMONTHYEAR_H_ */
