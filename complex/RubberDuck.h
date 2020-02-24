#ifndef __RUBBER_DUCK_H__
#define __RUBBER_DUCK_H__

#include "Quackable.h"
#include <string>
#include <iostream>
#include "Observable.h"

using namespace std;

class RubberDuck: public Quackable
{
private:
	Observable *observable;

public:
	RubberDuck()
	{
		observable = new Observable(this);
	}
	void quack()
	{
		cout << "RubberDuck squeak" << endl;
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
