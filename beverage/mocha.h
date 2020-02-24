#ifndef __MOCHA_H__
#define __MOCHA_H__

#include <iostream>
#include <string>
#include "condimentdecorator.h"

class Mocha: public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Mocha(Beverage *beverage) { this->beverage = beverage; }
	string getDescription() { return beverage->getDescription() + ", Mocha"; }
	double cost() { return 0.20 + beverage->cost(); }
};

#endif
