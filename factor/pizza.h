#ifndef __PIZZA_H__
#define __PIZZA_H__

#include <iostream>
#include <string>

using namespace std;

class Pizza
{
public:
	string name;
	string dough;
	string sauce;

public:
	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual string getName();
};

#endif
