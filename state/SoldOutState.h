#ifndef __SOLD_OUT_STATE_H__
#define __SOLD_OUT_STATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class SoldOutState: public State
{
private:
	GumballMachine *gumballMachine;

public:
	SoldOutState(GumballMachine *gumballMachine)
	{
		this->gumballMachine = gumballMachine;
	}
	void  insertQuarter()
	{
		cout << "SoldOutState insertQuarter" << endl;	
	}
	void ejectQuarter()
	{
		cout << "SoldOutState ejectQuarter" << endl;
	}
	void  turnCrank()
	{
		cout << "SoldOutState turnCrank" << endl;
	}
	void  dispense()
	{
		cout << "SoldOutState dispense" << endl;
	}
};

#endif
