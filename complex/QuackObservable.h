#ifndef __QUACK_OBSERVER_H__
#define __QUACK_OBSERVER_H__

class Observer;

class QuackObservable
{
public:
	virtual void registerObserver(Observer *observer) = 0;
	virtual void notifyObservers() = 0;
};

#endif
