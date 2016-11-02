/*
 * Renault.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef RENAULT_H_
#define RENAULT_H_

#include "CarI.h"

class Renault: public CarI {
public:
std::string getBrandOfCar();

Renault();
~Renault();
private:
std::string brandOfCar;
};

#endif /* RENAULT_H_ */
