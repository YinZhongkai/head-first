#ifndef __DARK_ROAST_H__
#define __DARK_ROAST_H__

#include <iostream>
#include <string>
#include "beverage.h"

class DarkRoast: public Beverage
{
public:
	DarkRoast() { description = "DarkRoast"; }
	string getDescription() { return description; }
	double cost() { return 0.99; }
};

#endif
