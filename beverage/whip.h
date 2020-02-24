#ifndef __WHIP_H__
#define __WHIP_H__

#include <iostream>
#include <string>
#include "condimentdecorator.h"

class Whip: public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Whip(Beverage *beverage) { this->beverage = beverage; }
	string getDescription() { return beverage->getDescription() + ", Whip"; }
	double cost() { return 0.10 + beverage->cost(); }
};

#endif
