/*
 * CarFactrory.cpp
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#include "CarFactory.h"

CarI* CarFactory::createCar(BrandE brandOfCar)
{
	switch(brandOfCar)
	  {
	    case HONDA:
	    return new Honda();
	    break;

	    case RENAULT:
	    return new Renault();
	    break;

	    default:
	    return NULL;
	    break;
	  }
}

CarFactory::CarFactory() {
	// TODO Auto-generated constructor stub

}

CarFactory::~CarFactory() {
	// TODO Auto-generated destructor stub
}

