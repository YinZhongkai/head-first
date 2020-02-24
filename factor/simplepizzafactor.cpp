#include "simplepizzafactor.h"

Pizza *SimplePizzaFactor::createPizza(const string type)
{
	#if 0
	Pizza *pizza = NULL;

	if(0 == type.compare("cheese"))
	{
		pizza = new CheesePizza();
	}
	else if(0 == type.compare("pepperoni"))
	{
		pizza = new PepperoniPizza();
	}
	else if(0 == type.compare("clam"))
	{
		pizza = new ClamPizza();
	}
	else if(0 == type.compare("veggle"))
	{
		pizza = new VegglePizza();
	}
	#endif

	return pizza;
}
