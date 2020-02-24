#ifndef __CAFFEINE_BEVERAGE_H__
#define __CAFFEINE_BEVERAGE_H__

#include <iostream>

using namespace std;

class CaffeineBeverage
{
public:
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

	void boilWater()
	{
		cout << "boiling water" << endl;	
	}

	virtual void brew() = 0;
	
	virtual void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}

	virtual void addCondiments() = 0;
};

#endif
