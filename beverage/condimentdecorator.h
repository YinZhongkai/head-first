#ifndef __CONDIMENT_DECORATOR_H__
#define __CONDIMENT_DECORATOR_H__

#include <iostream>
#include <string>
#include "beverage.h"

class CondimentDecorator: public Beverage
{
public:
	virtual string getDescription() = 0; 
	virtual double cost() = 0;
};

#endif
