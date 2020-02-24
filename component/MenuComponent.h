#ifndef __MENU_COMPONENT_H__
#define __MENU_COMPONENT_H__

#include <string>

using namespace std;

class MenuComponent
{
public:
	virtual void add(MenuComponent *menuComponent)
	{

	}
	virtual void remove(MenuComponent *menuComponent)
	{

	}
	virtual MenuComponent *getChild(int i)
	{
		return NULL;
	}
	virtual string getName()
	{
		return "null";	
	}
	virtual string getDescription()
	{
		return "null";	
	}
	virtual double getPrice()
	{
		return 0.0;
	}
	virtual bool isVegetarian()
	{
		return false;
	}
	virtual void print()
	{
		
	}
};

#endif
