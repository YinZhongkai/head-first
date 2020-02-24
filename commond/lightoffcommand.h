#ifndef __LIGHT_OFF_COMMAND_H__
#define __LIGHT_OFF_COMMAND_H__

#include "command.h"
#include "light.h"

class LightOffCommand: public Command
{
private:
	Light light;

public:
	LightOffCommmand(const Light &ight)
	{
		this->light = light;
	}

	void execute()
	{
		light.off();
	}
};

#endif
