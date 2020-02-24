#ifndef __GARAGE_DOOR_OPEN_COMMAND_H__
#define __GARAGE_DOOR_OPEN_COMMAND_H__

#include "garagedoor.h"

class GarageDoorOpenCommand: public Command
{
private:
	GarageDoor garageDoor;

public:
	GarageDoorOpenCommand(const GarageDoor &garageDoor)
	{
		this->garageDoor = garageDoor;
	}

	void execute()
	{
		garageDoor.open();
	}
};

#endif
