#ifndef __QUACK_COUNT_H__
#define __QUACK_COUNT_H__

#include "Quackable.h"
#include "Observable.h"

class QuackCount: public Quackable
{
private:
	static int numberOfQuacks;			
	Quackable *duck;
	Observable *observable;

public:
	QuackCount(Quackable *duck)
	{
		this->duck = duck;
		observable = new Observable(this);
	}
	void quack()
	{
		duck->quack();
		this->numberOfQuacks++;
	}
	static int getNumberOfQuacks()
	{
		return numberOfQuacks;
	}
	void registerObserver(Observer *observer)
	{
		observable->registerObserver(observer);
	}
	void notifyObservers()
	{
		observable->notifyObservers();
	}
};

int QuackCount::numberOfQuacks = 0;

#endif
