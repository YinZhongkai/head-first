#ifndef __MY_STYLE_PIZZA_STORE_H__
#define __MY_STYLE_PIZZA_STORE_H__

#include "pizzastore.h"
#include <iostream>
#include <string>
#include "pizza.h"

using namespace std;

class NYStylePizzaStore: public PizzaStore
{
public:
	Pizza *createPizza(const string &type);
};

#endif
