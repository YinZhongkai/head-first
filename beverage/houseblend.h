#ifndef __HOUSE_BLEND_H__
#define __HOUSE_BLEND_H__ 

#include <iostream>
#include <string>
#include "beverage.h"

class HouseBlend: public Beverage
{
public:
	HouseBlend() { description = "HouseBlend"; }
	string getDescription() { return description; }
	double cost() { return 0.89; }
};

#endif
