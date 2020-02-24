#ifndef __FLOCK_H__
#define __FLOCK_H__

#include "Quackable.h"
#include <list>
#include "Observable.h"

using namespace std;

class Flock: public Quackable
{
private:
	list<Quackable *> quackers;

public:
	void add(Quackable *quacker)
	{
		quackers.push_back(quacker);
	}
	void quack()
	{
		list<Quackable *>::iterator it;
		for(it = quackers.begin(); it != quackers.end(); it++)
			(*it)->quack();
	}
	void registerObserver(Observer *observer)
	{
		list<Quackable *>::iterator it;
		for(it = quackers.begin(); it != quackers.end(); it++)
			(*it)->registerObserver(observer);
	}
	void notifyObservers()
	{
		list<Quackable *>::iterator it;
		for(it = quackers.begin(); it != quackers.end(); it++)
			(*it)->notifyObservers();
	}
};

#endif
