#ifndef __QUACKOLOGIST_H__
#define __QUACKOLOGIST_H__

#include "Observer.h"
#include <iostream>

using namespace std;

class Quackologist: public Observer
{
public:
	void update(QuackObservable *duck)
	{
		cout << "hello world!" << endl;
	}
};

#endif
