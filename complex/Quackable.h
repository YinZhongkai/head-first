#ifndef __QUACKABLE_H__
#define __QUACKABLE_H__

#include "QuackObservable.h"

class Quackable: public QuackObservable
{
public:
	virtual void quack() = 0;
};

#endif
