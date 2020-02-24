#include "nystylepizzastore.h"
#include "nystylecheesepizza.h"
#include "nystylepepperonipizza.h"
#include "nystyleclampizza.h"
#include "nystylevegglepizza.h"

Pizza *NYStylePizzaStore::createPizza(const string &type)
{
	if(0 == type.compare("cheese"))
	{
		return new NYStyleCheesePizza();
	}
	else if(0 == type.compare("pepperoni"))
	{
		return new NYStylePepperoniPizza();
	}
	else if(0 == type.compare("clam"))
	{
		return new NYStyleClamPizza();
	}
	else if(0 == type.compare("veggle"))
	{
		return new NYStyleVegglePizza();
	}
	else
	{
		return NULL;
	}
}
