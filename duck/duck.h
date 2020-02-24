#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>
#include "flybehavior.h"
#include "quackbehavior.h"

using namespace std;

class Duck
{
private:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;

public:
	Duck();
	virtual ~Duck();

	void performFly();
	void performQuack();
	void display();	
};

#endif
