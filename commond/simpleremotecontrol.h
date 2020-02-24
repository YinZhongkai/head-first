#ifndef __SIMPLE_REMOTE_CONTROL_H__
#define __SIMPLE_REMOTE_CONTROL_H__

#include "command.h"

class SimpleRemoteControl
{
private:
	Command *slot;

public:
	SimpleRemoteControl() 
	{
		slot = NULL;
	}

	void setCommand(Command *command)
	{
		this->slot = command;
	}

	void buttonWasPress()
	{
		slot->execute();
	}
};

#endif
