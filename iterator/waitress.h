#ifndef __WAITRESS_H__
#define __WAITRESS_H__ 

#include "dinermenu.h"
#include "dinermenuiterator.h"
#include "pancakehousemenu.h"
#include "pancakehousemenuiterator.h"

class Waitress
{
private:
	DinerMenu *dinerMenu;
	PancakeHouseMenu *pancakeHouseMenu;

	void printMenu(Iterator *iterator)
	{
		while(iterator->hasNext())
		{
			MenuItem *tmpMenuItem = iterator->next();
			cout << tmpMenuItem->getName() << ", " << tmpMenuItem->getPrice() << " -- " << tmpMenuItem->getDescription() << endl;
		}
	}

public:
	Waitress(PancakeHouseMenu *pancakeHouseMenu, DinerMenu *dinerMenu)
	{
		this->pancakeHouseMenu = pancakeHouseMenu;
		this->dinerMenu = dinerMenu;	
	}

	void printMenu()
	{
		Iterator *dinerMenuIterator = dinerMenu->createIterator();
		cout << "Lunch" << endl;
		printMenu(dinerMenuIterator);

		Iterator *pancakeHouseMenuIterator = pancakeHouseMenu->createIterator();
		cout << "Breakfast" << endl;
		printMenu(pancakeHouseMenuIterator);
	}
};

#endif
