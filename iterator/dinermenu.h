#ifndef __DINER_MENU_H__
#define __DINER_MENU_H__

#include <iostream>
#include "dinermenuiterator.h"

using namespace std;


class DinerMenu
{
private:
	MenuItem *menuItems[MAX_ITEMS];
	int numberOfItems;

public:
	DinerMenu()
	{
	 	numberOfItems = 0;
		for(int i = 0; i < MAX_ITEMS; i++)
			menuItems[i] = NULL;

		addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
		addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
		addItem("Soup of the day", "Soup of the day, with a side of potao salad", false, 3.29);
		addItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with chess", false, 3.05);
	}

	~DinerMenu()
	{
		for(int i = 0; i < MAX_ITEMS; i++)
		{
			if(menuItems[i] != NULL)
				delete menuItems[i];
		}
	}

	void addItem(string name, string description, bool vegetarian, double price)
	{
		MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
		if(numberOfItems > MAX_ITEMS)
		{
			cout << "Sorry, menu is full! Can't add item to menu" << endl;
		}
		else
		{
			menuItems[numberOfItems] = menuItem;
			numberOfItems++;
		}
	}

	Iterator *createItertor()
	{
		return new DinerMenuIterator(menuItems);
	}
};

#endif
