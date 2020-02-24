#ifndef __ABSTRACT_DUCK_FACTORY_H__
#define __ABSTRACT_DUCK_FACTORY_H__

#include "Quackable.h"

class AbstructDuckFactory
{
public:
	virtual Quackable *createMallerdDuck() = 0;
	virtual Quackable *createRedheadDuck() = 0;
	virtual Quackable *createDuckCall() = 0;
	virtual Quackable *createRubberDuck() = 0;
	virtual Quackable *createGooseAdapter() = 0;
};

#endif
