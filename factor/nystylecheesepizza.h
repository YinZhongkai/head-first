#ifndef __CHEESE_PIZZA_H__
#define __CHEESE_PIZZA_H__

#include "pizza.h"

class NYStyleCheesePizza: public Pizza
{
public:
	NYStyleCheesePizza()
	{
		name = "NY Style Sauce and Cheese Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara Sauce";
	}
};

#endif
