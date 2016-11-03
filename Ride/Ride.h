/*
 * Ride.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef RIDE_H_
#define RIDE_H_

#include <string>
#include <iostream>

#include "RideI.h"
#include "DateDayMonthYear.h"
#include "ToString.h"
#include "CarI.h"
#include "CarFactory.h"

class Ride : public RideI
{
public:
	Ride ();
	~Ride ();
private:
	DateDayMonthYear dateOfRide;
	CarI* car;
	int amountOfFuel;
public:
	Ride getRide();
	std::string writeToString();
	void setDate(std::string&);
	std::string	getDate ();
};

#endif /* RIDE_H_ */
