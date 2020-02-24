#ifndef __HAS_QUARTER_STATE_H__
#define __HAS_QUARTER_STATE_H__

#include "State.h"
#include <iostream>
#include "GumballMachine.h"

using namespace std;

class HasSoldState: public State
{
private:
	GumballMachine *gumballMachine;

public:
	HasSoldState(GumballMachine *gumballMachine)
	{
		this->gumballMachine = gumballMachine;
	}
	void insertQuarter()
	{
		cout << "You can't insert another quarter" << endl;
	}
	void ejectQuarter()
	{
		cout << "Quarter returned" << endl;
		gumballMachine->setState(gumballMachine->getNoQuarterState());
	}
	void turnCrank()
	{
		cout << "You turned..." << endl;
		gumballMachine->setState(gumballMachine->getSoldSate());
	}
	void dispense()
	{
		cout << "No gumball dispense" << endl;
	}
};

#endif
