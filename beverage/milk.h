#ifndef __MILK_H__
#define __MILK_H__

#include <iostream>
#include <string>
#include "condimentdecorator.h"

class Milk: public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Milk(Beverage *beverage) { this->beverage = beverage; }
	string getDescription() { return beverage->getDescription() + ", Milk"; }
	double cost() { return 0.10 + beverage->cost(); }
};

#endif
