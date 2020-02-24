#ifndef __EXPRESSO_H__
#define __EXPRESSO_H__

#include <iostream>
#include <string>
#include "beverage.h"

class Expresso: public Beverage
{
public:
	Expresso() { description = "Expresso"; }
	string getDescription() { return description; }
	double cost() { return 1.99; }
};

#endif
