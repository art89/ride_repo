/*
 * CarFactroryI.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef CARFACTRORYI_H_
#define CARFACTRORYI_H_

#include "CarI.h"
#include "Honda.h"
#include "Renault.h"

enum BrandE{RENAULT, HONDA};

class CarFactoryI {
public:
static CarI* createCar(BrandE);

CarFactoryI(){};
virtual ~CarFactoryI(){};
};

#endif /* CARFACTRORYI_H_ */
