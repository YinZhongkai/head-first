#ifndef __PEPPERONI_PIZZA_H__
#define __PEPPERONI_PIZZA_H__

#include "pizza.h"

class NYStylePepperoniPizza: public Pizza
{
public:
	NYStylePepperoniPizza()
	{
		name = "NY Style Sauce and Pepperoni Pizza";
		dough = "Thin Crust Dough pepperoni";
		sauce = "Marinara Sauce pepperoni";
		
	}
};

#endif
