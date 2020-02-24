#ifndef __DUCK_FACTORY_H__
#define __DUCK_FACTORY_H__

#include "MallarDuck.h"
#include "RedHeadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "GooseAdapter.h"

class DuckFactory: public AbstructDuckFactory
{
public:
	Quackable *createMallerdDuck()
	{
		return new MallarDuck();
	}
	Quackable *createRedheadDuck()
	{
		return new RedHeadDuck();
	}
	Quackable *createDuckCall()
	{
		return new DuckCall();
	}
	Quackable *createRubberDuck()
	{
		return new RubberDuck();
	}
	Quackable *createGooseAdapter()
	{
		return new GooseAdapter(new Goose());
	}
};

#endif
