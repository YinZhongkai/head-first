#include <iostream>
#include "expresso.h"
#include "houseblend.h"
#include "darkroast.h"
#include "decaf.h"
#include "mocha.h"
#include "milk.h"
#include "soy.h"
#include "whip.h"

using namespace std;

int main(void)
{
	Beverage *beverage = new Expresso();
	Beverage *beverage1 = new Mocha(beverage);
	cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;

	Beverage *beverage2 = new HouseBlend();
	Beverage *beverage3 = new Mocha(beverage2);
	Beverage *beverage4 = new Mocha(beverage3);
	Beverage *beverage5 = new Whip(beverage4);
	cout << beverage5->getDescription() << " $" << beverage5->cost() << endl;

	return 0;
}
