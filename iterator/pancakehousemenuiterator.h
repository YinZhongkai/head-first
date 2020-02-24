#ifndef __PANCAKE_HOUSE_MENU_ITERATOR_H__
#define __PANCAKE_HOUSE_MENU_ITERATOR_H__

#include "menuitem.h"
#include "iterator.h"

class PancakeHouseMenuIterator: public Iterator
{
private:
	vector<MenuItem *> menuItems;
	int position;

public:
	PancakeHouseMenuIterator(vector<MenuItem *> &menuItems)
	{
		this->menuItems = menuItems;
		this->position = 0;
	}

	bool hasNext()
	{
		if(position >= menuItems.size() || menuItems[position] == NULL)
			return false;
		else
			return true;
	}

	MenuItem *next()
	{
		MenuItem *tmpMenuItem = menuItems[position];
		position++;
		return tmpMenuItem;
	}
};

#endif
