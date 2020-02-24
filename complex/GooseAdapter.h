#ifndef __GOOSE_ADAPTER_H__
#define __GOOSE_ADAPTER_H__

#include "Quackable.h"
#include "Goose.h"
#include "Observable.h"

class GooseAdapter: public Quackable
{
private:
	Goose *goose;
	Observable *observable;

public:
	GooseAdapter(Goose *goose)
	{
		this->goose = goose;
		observable = new Observable(this);
	}
	void quack()
	{
		goose->honk();
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
