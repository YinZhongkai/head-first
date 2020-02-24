#ifndef __MALLAR_DUCK_H__
#define __MALLAR_DUCK_H__

#include "Quackable.h"
#include <string>
#include <iostream>
#include "Observable.h"

using namespace std;

class MallarDuck: public Quackable
{
private:
	Observable *observable;

public:
	MallarDuck()
	{
		observable = new Observable(this);
	}
	void quack()
	{
		cout << "MallarDuck quack" << endl;
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
