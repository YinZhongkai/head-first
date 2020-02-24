#ifndef __DINER_MENU_ITERATOR_H__
#define __DINER_MENU_ITERATOR_H__

#include "menuitem.h"
#include "iterator.h"

#define MAX_ITEMS	6

class DinerMenuIterator: public Iterator
{
private:
	MenuItem **menuItem;
	int position;

public:
	DinerMenuIterator(MenuItem **menuItem)
	{
		this->menuItem = menuItem;	
		this->position = 0;
	}

	bool hasNext()
	{
		if(position >= MAX_ITEMS || menuItem[position] == NULL)	
			return false;
		else
			return true;
	}

	MenuItem *next()
	{
		MenuItem *tmpItem = menuItem[position];
		position++;
		return tmpItem;
	}
};

#endif
