#include <iostream>
#include "pizzastore.h"
#include "nystylepizzastore.h"

using namespace std;

int main(void)
{
	PizzaStore *nyPizzaStore = new NYStylePizzaStore();

	Pizza *pizza = nyPizzaStore->orderPizza("cheese");
	cout << "111 order " << pizza->getName() << endl << endl;;

	//Pizza *pizza1 = nyPizzaStore->orderPizza("pepperoni");
	//cout << "111 order " << pizza->getName() << endl << endl;;

	Pizza *pizza2 = nyPizzaStore->orderPizza("clam");
	cout << "111 order " << pizza->getName() << endl << endl;

	//Pizza *pizza3 = nyPizzaStore->orderPizza("veggle");
	//cout << "111 order " << pizza->getName() << endl;

	return 0;
}
