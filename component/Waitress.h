#ifndef __WAITRESS_H__
#define __WAITRESS_H__

#include "MenuComponent.h"

class Waitress
{
private:
	MenuComponent *allMenus;

public:
	Waitress(MenuComponent *allMenus)
		:allMenus(allMenus)
	{

	}
	void printMenu()
	{
		allMenus->print();
	}
};

#endif
