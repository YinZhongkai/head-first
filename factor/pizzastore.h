#ifndef __PIZZA_STORE_H__
#define __PIZZA_STORE_H__

//#include "simplepizzafactor.h"
#include "pizza.h"

class PizzaStore
{
public:
	//SimplePizzaFactor *factor;

	//PizzaStore(SimplePizzaFactor *factor);
	virtual Pizza *orderPizza(const string &type);
	virtual Pizza *createPizza(const string &type) = 0;
};

#endif
