/*
 * CarFactrory.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef CARFACTRORY_H_
#define CARFACTRORY_H_

#include "CarFactoryI.h"

class CarFactory: public CarFactoryI {
public:
static CarI* createCar(BrandE);

CarFactory();
~CarFactory();
};

#endif /* CARFACTRORY_H_ */
