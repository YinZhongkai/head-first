#ifndef __DUCK_CALL_H__
#define __DUCK_CALL_H__

#include "Quackable.h"
#include <string>
#include <iostream>
#include "Observable.h"

using namespace std;

class DuckCall: public Quackable
{
private:
	Observable *observable;

public:
	DuckCall()
	{
		observable = new Observable(this);
	}
	void quack()
	{
		cout << "DuckCall kwak" << endl;
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
