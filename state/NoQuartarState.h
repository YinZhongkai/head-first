#ifndef __NO_QUARTER_STATE_H__
#define __NO_QUARTER_STATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class NoSoldState: public State
{
private:
	GumballMachine *gumballMachine;

public:
	NoSoldState(GumballMachine *gumballMachine)
	{
		this->gumballMachine = gumballMachine;
	}
	void insertQuarter()
	{
		cout << "You inserted a quarter" << endl;
		gumballMachine->setState(gumballMachine->getHasQuarterState());
	}
	void ejectQuarter()
	{
		cout << "You haven't inserted a quarter" << endl;
	}
	void turnCrank()
	{
		cout << "You turned, but there's no quarter" << endl;
	}
	void dispense()
	{
		cout << "You need to pay first" << endl;
	}
};

#endif
