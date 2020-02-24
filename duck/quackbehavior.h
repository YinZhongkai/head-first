#ifndef __QUACKBEHAVIOR_H__
#define __QUACKBEHAVIOR_H__

#include <iostream>

using namespace std;

class QuackBehavior
{
public:
	virtual void quack();
};

class Quack: public QuackBehavior
{
public:
	void quack();
};

class Squeak: public QuackBehavior
{
public:
	void quack();
};

class MuteQuack: public QuackBehavior
{
public:
	void quack();
};

#endif
