#ifndef __LIGHT_ON_COMMOND_H
#define __LIGHT_ON_COMMOND_H

#include "command.h"
#include "light.h"

class LightOnCommand: public Command
{
private:
	Light light;

public:
	LightOnCommand(const Light &light)
	{
		this->light = light;
	}

	void execute()
	{
		light.on();
	}

};

#endif
