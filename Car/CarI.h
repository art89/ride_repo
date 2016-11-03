/*
 * CarI.h
 *
 *  Created on: 23 pa? 2016
 *      Author: eartszc
 */

#ifndef CARI_H_
#define CARI_H_

#include <string>
class CarI
{
public:
virtual std::string getBrandOfCar()=0;
CarI() {}
virtual ~CarI() {}

protected:

private:
};



#endif /* CARI_H_ */
