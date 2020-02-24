#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

#include <iostream>

using namespace std;

class State;
class SoldOutState;
class NoQuarterState;
class HasSoldState;
class SoldOutState;

class GumballMachine
{
private:
	State *soldOutState;
	State *noQuarterState;
	State *hasQuarterState;
	State *soldState;

	State *state;
	int count;

public:
	GumballMachine(int numberGumBalls)
		:count(0)
	{
		soldOutState = new SoldOutState(this);
		noQuarterState = new NoQuarterState(this);
		hasQuarterState = new HasQuarterState(this);
		soldState = new SoldState(this);
		count = numberGumBalls;
		if(count > 0)
			state = noQuarterState;
	}
	void insertQuarter()
	{
		state->insertQuarter();
	}
	void ejectQuarter()
	{
		state->ejectQuarter();
	}
	void turnCrank()
	{
		state->turnCrank();
		state->dispense();
	}
	void setState(State *state)
	{
		this->state = state;
	}
	void releaseBall()
	{
		cout << "A gumball comes rolling out the slot..." << endl;
		if(count != 0)
			count--;
	}
	int getCount()
	{
		return count;
	}
	State *getSoldOutState()
	{
		return soldOutState;
	}
	State *getNoQuarterState()
	{
		return noQuarterState;
	}
	State *getHasQuarterState()
	{
		return hasQuarterState;
	}
	State *getSoldSate()
	{
		return soldState;
	}
};

#endif
