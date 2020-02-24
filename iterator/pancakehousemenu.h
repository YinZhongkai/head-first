#ifndef __PANCAKE_HOUSE_MENU_H__
#define __PANCAKE_HOUSE_MENU_H__

#include <vector>
#include "menuitem.h"
#include "pancakehousemenuiterator.h"

using namespace std;

class PancakeHouseMenu
{
private:
	vector<MenuItem *> menuItems;

public:
	PancakeHouseMenu()
	{
		addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
		addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
		addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
		addItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
	}

	void addItem(string name, string description, bool vegetarian, double price)
	{
		MenuItem *pMenuItem = new MenuItem(name, description, vegetarian, price);
		menuItems.push_back(pMenuItem);
	}

	Iterator *createIterator()
	{
		return new PancakeHouseMenuIterator(menuItems);
	}
};

#endif
