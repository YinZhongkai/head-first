#ifndef __REMOTE_CONTROL_H__
#define __REMOTE_CONTROL_H__

#include "command.h"
#include <string>
#include <iostream>

using namespace std;

class RemoteControl
{
private:
	Command *onCommands;
	Command *offCommands;

public:
	RemonteControl()
	{
		onCommands = new Command[7];
		offCommands = new Command[7];

		Command noCommand = new NoCommand();
		for(int i = 0; i < 7; i++)
		{
			onCommands[i] = noCommand;
			offCommands[i] = noCommand;
		}
	}

	void setCommand(int slot, Command onCommand, Command offCommand)
	{
		onCommand[slot] = onCommand;
		offCommand[slot] = offCommand;
	}

	void onButtonWasPushed(int slot)
	{
		onCommand[slot].execute();
	}

	void offButtonWasPushed(int slot)
	{
		offCommand[slot].execute();
	}

	string toString()
	{
		string info;
		cout << endl << "------Remote Control------" << endl;


		return info;
	}
};

#endif
