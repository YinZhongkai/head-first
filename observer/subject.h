#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "observer.h"

class Subject
{
public:
	virtual void registerObserver(Observer *o){};
	virtual void removeObserver(Observer *o){};
	virtual void notifyObserver(){};
};

#endif
