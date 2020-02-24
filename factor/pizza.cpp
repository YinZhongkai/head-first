#include "pizza.h"

void Pizza::prepare()
{
	cout << "Preparing " << name << endl;;
	cout << "Tossing dough..." << endl;
	cout << "Ading sauce..." << endl;
	cout << "Adding toppings: " << endl;
}

void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" << endl;
}

string Pizza::getName()
{
	return name;
}
