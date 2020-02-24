#ifndef __GARAGE_DOOR_H__
#define __GARAGE_DOOR_H__

#include <iostream>
#include <string>

using namespace std;

class GarageDoor
{
private:
	string name;

public:
	GarageDoor(const string &name)
	{
		this->name = name;
	}

	void up()
	{
		cout << "Garage door up" << endl;
	}

	void down()
	{
		cout << "Garage door down" << endl;
	}

	void stop()
	{
		cout << "Garage door stop" << endl;
	}

	void lightOn()
	{
		cout << "Garage door is light on" << endl;
	}

	void lightOff()
	{
		cout << "Garage door is light off" << endl;
	}

	void open()
	{
		cout << "Garage door open" << endl;
	}
};

#endif
