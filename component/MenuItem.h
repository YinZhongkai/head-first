#ifndef __MENU_ITEM_H__
#define __MENU_ITEM_H__

#include "MenuComponent.h"
#include <iostream>

using namespace std;

class MenuItem: public MenuComponent
{
private:
	string name;
	string description;
	bool vegetarian;
	double price;

public:
	MenuItem(string name, string description, bool vegetarian, double price)
		:name(name), description(description), vegetarian(vegetarian), price(price)
	{

	}
	string getName()
	{
		return name;
	}
	string getDescription()
	{
		return description;
	}
	bool isVegetarian()
	{
		return vegetarian;
	}
	double getPrice()
	{
		return price;
	}
	void print()
	{
		cout << "\t" << getName();

		if(vegetarian)
			cout << "(v)";
		
		cout << ", " << getPrice() << "\t-- " << getDescription();

		cout << endl;
	}
};

#endif
