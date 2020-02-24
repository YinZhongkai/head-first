#ifndef __SIMPLE_PIZZA_FACTOR_H__
#define __SIMPLE_PIZZA_FACTOR_H__

#include "pizza.h"
#include <string>

using namespace std;

class SimplePizzaFactor
{
public:
	Pizza *pizza;
	
	Pizza *createPizza(const string type);
};

#endif
