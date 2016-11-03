/*
 * CarFactrory_test.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include <iostream>

#include "CarFactory.h"

int main()
{
std::cout << "TEST START" << std::endl;

CarI* carPointer = CarFactory::createCar(RENAULT);
std::cout << carPointer->getBrandOfCar() << std::endl;

std::cout << "TEST END" << std::endl;
}
