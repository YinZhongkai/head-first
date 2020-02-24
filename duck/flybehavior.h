#ifndef __FLYBEHAVIOR_H__
#define __FLYBEHAVIOR_H__ 

#include <iostream>

using namespace std;

class FlyBehavior
{
public:
	virtual void fly();
};

class FlyWithWings: public FlyBehavior
{
public:
	void fly();
};

class FlyNoWay: public FlyBehavior
{
public:
	void fly();
};

#endif
