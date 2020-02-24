#ifndef __MENU_ITEM_H__
#define __MENU_ITEM_H__

#include <string>
#include <iostream>

using namespace std;

class MenuItem
{
private:
	string name;
	string description;
	bool vegetarian;
	double price;

public:
	MenuItem(string name, string description, bool vegetarian, double price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}

	string getName()
	{
		return name;
	}

	string getDescription()
	{
		return description;
	}

	bool getVegetarian()
	{
		return vegetarian;
	}

	double getPrice()
	{
		return price;
	}
};

#endif
