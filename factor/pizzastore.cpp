#include "pizzastore.h"

#if 0
PizzaStore::PizzaStore(SimplePizzaFactor *factor)
{
	this->factor = factor;
}
#endif

Pizza *PizzaStore::orderPizza(const string &type)
{
	Pizza *pizza = NULL;

	//pizza = factor->createPizza(type);
	pizza = this->createPizza(type);

	if(NULL == pizza)
		return NULL;

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	
	return pizza;
}
