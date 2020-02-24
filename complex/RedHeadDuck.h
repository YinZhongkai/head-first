#ifndef __RED_HEAD_DUCK_H__
#define __RED_HEAD_DUCK_H__

#include "Quackable.h"
#include <string>
#include <iostream>
#include "Observable.h"

using namespace std;

class RedHeadDuck: public Quackable
{
private:
	Observable *observable;

public:
	RedHeadDuck()
	{
		observable = new Observable(this);
	}
	void quack()
	{
		cout << "RedHeadDuck quack" << endl;
		notifyObservers();
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

#endif
