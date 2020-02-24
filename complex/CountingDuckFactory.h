#ifndef __COUNTING_DUCK_FACTORY_H__
#define __COUNTING_DUCK_FACTORY_H__

#include "MallarDuck.h"
#include "RedHeadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "QuackCount.h"
#include "AbstractDuckFactory.h"

class CountingDuckFactory: public AbstructDuckFactory
{
public:
	Quackable *createMallerdDuck()
	{
		return new QuackCount(new MallarDuck());
	}
	Quackable *createRedheadDuck()
	{
		return new QuackCount(new RedHeadDuck());
	}
	Quackable *createDuckCall()
	{
		return new QuackCount(new DuckCall());
	}
	Quackable *createRubberDuck()
	{
		return new QuackCount(new RubberDuck());
	}
	Quackable *createGooseAdapter()
	{
		return new QuackCount(new GooseAdapter(new Goose()));
	}
};

#endif
