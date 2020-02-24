#ifndef __TEA_H__
#define __TEA_H__

#include "caffeinebeverage.h"

class Tea: public CaffeineBeverage
{
public:
	void brew()
	{
		cout << "tea brew" << endl;
	}

	void addCondiments()
	{
		cout << "tea adding condiments" << endl;
	}
};

#endif
