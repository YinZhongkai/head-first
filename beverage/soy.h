#ifndef __SOY_H__
#define __SOY_H__

#include <iostream>
#include <string>
#include "condimentdecorator.h"

class Soy: public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Soy(Beverage *beverage) { this->beverage = beverage; }
	string getDescription() { return beverage->getDescription() + ", Soy"; }
	double cost() { return 0.15 + beverage->cost(); }
};

#endif
