#ifndef __MENU_H__
#define __MENU_H__

#include "MenuComponent.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Menu: public MenuComponent
{
private:
	vector<MenuComponent *> menuComponets;
	string name;
	string description;

public:
	Menu(string name, string description)
		:name(name), description(description)
	{

	}
	void add(MenuComponent *menuComponet)
	{
		menuComponets.push_back(menuComponet);
	}
	void remove(MenuComponent *menuComponet)
	{
		vector<MenuComponent *>::iterator it;
		for(it = menuComponets.begin(); it != menuComponets.end(); it++)
		{
			if(*it == menuComponet)
			{
				menuComponets.erase(it);
				return ;
			}
		}
	}
	MenuComponent *getChild(int i)
	{
		return menuComponets[i];
	}
	string getName()
	{
		return name;
	}
	string getDescription()
	{
		return description;
	}
	void print()
	{
		cout << endl;
		cout << getName() << ", " << getDescription();
		cout << endl;
		cout << "--------------------------------" << endl;

		vector<MenuComponent *>::iterator it;
		for(it = menuComponets.begin(); it != menuComponets.end(); it++)
			(*it)->print();
	}
};

#endif
