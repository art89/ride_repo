/*
 * Ride.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "Ride.h"

Ride Ride::getRide()
{
return *this;
}
std::string Ride::writeToString()
{

    std::string allDataInString;
    allDataInString =
    this->getDate() + " "
    + car->getBrandOfCar() + " "
    + ToString::intToString(this->amountOfFuel);
    return allDataInString;

}
void Ride::setDate(std::string &dateOfRideTemp)
{
this->dateOfRide.setDate(dateOfRideTemp);
}
std::string Ride::getDate()
{
   if(this->dateOfRide.getDate().length()!=0)
    {
    return this->dateOfRide.getDate();
    }
    else return "EMPTY";

}

Ride::Ride ()
: car(NULL), amountOfFuel(99)
{
std::string tempChosenBrand = "";
std::cout << "TYPE_CAR" << std::endl;
std::cin >> tempChosenBrand;
if(tempChosenBrand == "honda")
	{
		car = CarFactory::createCar(HONDA);
	}
if(tempChosenBrand == "renault")
	{
		car = CarFactory::createCar(RENAULT);
	}
}
Ride::~Ride ()
{
  delete car;
}

