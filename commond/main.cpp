#include <iostream>
#include "simpleremotecontrol.h"
#include "light.h"
#include "lightoncommand.h"
#include "garagedoor.h"
#include "garagedooropencommand.h"

using namespace std;

int main(void)
{
	SimpleRemoteControl remote;

	Light light;
	LightOnCommand *lightOn = new LightOnCommand(light);

	GarageDoor garageDoor;
	GarageDoorOpenCommand *garageDoorOpen = new GarageDoorOpenCommand(garageDoor);

	remote.setCommand(lightOn);
	remote.buttonWasPress();

	remote.setCommand(garageDoorOpen);
	remote.buttonWasPress();

	return 0;
}
