#ifndef __OBSERVABLE_H__
#define __OBSERVABLE_H__

#include "QuackObservable.h"
#include <list>
#include "Observer.h"

using namespace std;

class Observable: public QuackObservable
{
private:
	list<Observer *> observers;
	QuackObservable *duck;

public:
	Observable(QuackObservable *duck)
	{
		this->duck = duck;	
	}
	void registerObserver(Observer *observer)
	{
		observers.push_back(observer);
	}
	void notifyObservers()
	{
		list<Observer *>::iterator it;
		for(it = observers.begin(); it != observers.end(); it++)
			(*it)->update(duck);
	}
};

#endif
