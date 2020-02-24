#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "QuackObservable.h"

class Observer
{
public:
	virtual void update(QuackObservable *duck) = 0;
};

#endif
