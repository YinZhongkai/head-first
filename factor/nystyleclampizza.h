#ifndef __CLAM_PIZZA_H__
#define __CLAM_PIZZA_H__

#include "pizza.h"

class NYStyleClamPizza: public Pizza
{
public:
	NYStyleClamPizza()
	{
		name = "NY Style sauce and Clam Pizza";
		dough = "Thin Crust Dough Clam";
		sauce = "Marinara Sauce";
	}
	
	void cut() { cout << "aaaaaaa" << endl; }
};

#endif
