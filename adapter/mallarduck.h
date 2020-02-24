#ifndef __MALLAR_DUCK_H__
#define __MALLAR_DUCK_H__

#include <iostream>
#include "duck.h"

using namespace std;

class MallarDuck: public Duck
{
public:
	void quack()
	{
		cout << "Quack" << endl;
	}

	void fly()
	{
		cout << "I'm flying" << endl;
	}
};

#endif
