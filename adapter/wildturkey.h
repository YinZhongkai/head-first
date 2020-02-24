#ifndef __WILD_TURKEY_H__
#define __WILD_TURKEY_H__

#include <iostream>
#include "turkey.h"

using namespace std;

class WildTurkey: public Turkey
{
public:
	void gobble()
	{
		cout << "Gobble gobble" << endl;
	}

	void fly()
	{
		cout << "I'm flying a short distance." << endl;
	}
};

#endif
