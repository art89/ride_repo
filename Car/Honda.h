/*
 * Honda.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef HONDA_H_
#define HONDA_H_

#include "CarI.h"

class Honda: public CarI {
public:
std::string getBrandOfCar();

Honda();
~Honda();

private:
std::string brandOfCar;
};

#endif /* HONDA_H_ */
