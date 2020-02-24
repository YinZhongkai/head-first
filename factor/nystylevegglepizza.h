#ifndef __VEGGLE_PIZZA_H__
#define __VEGGLE_PIZZA_H__

#include "pizza.h"

class NYStyleVegglePizza: public Pizza
{
public:
 	NYStyleVegglePizza()
	{
		name = "NY Style Sauce and Veggle Pizza";
		dough = "Thin Crust Dough Veggle";
		sauce = "Marinara Sauce Veggle";
	}
};

#endif
