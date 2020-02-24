#ifndef __TURKEY_ADAPTER_H__
#define __TURKEY_ADAPTER_H__

#include <iostream>
#include "duck.h"
#include "turkey.h"

using namespace std;

class TurkeyAdapter: public Duck
{
private:
	Turkey *pTurkey;

public:
	TurkeyAdapter(Turkey *pTurkey)
	{
		this->pTurkey = pTurkey;
	}

	void quack()
	{
		pTurkey->gobble();
	}

	void fly()
	{
		for(int i = 0; i < 5; i++)
			pTurkey->fly();
	}
};

#endif
