#ifndef __SOLD_STATE_H__
#define __SOLD_STATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>

using namespace std;

class SoldState: public State
{
private:
	GumballMachine *gumballMachine;

public:
	SoldState(GumballMachine *gumballMachine)
	{
		this->gumballMachine = gumballMachine;
	}

	void insertQuarter()
	{
		cout << "Plese wait, we're already giving you a gumball" << endl;		
	}
	void ejectQuarter()
	{
		cout << "Sorry, you already turned the crank" << endl;
	}
	void turnCrank()
	{
		cout << "Turning twice doesn't get you another gumball" << endl;
	}
	void dispense()
	{
		gumballMachine->releaseBall();
		if(gumballMachine->getCount() > 0)
		{
			gumballMachine->setState(gumballMachine->getNoQuarterState());
		}
		else
		{
			cout << "Oops, out of gumballs" << endl;
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}
	}
};

#endif
