#ifndef __LIGHT_H__
#define __LIGHT_H__ 

#include <iostream>
#include <string>

using namespace std;

class Light
{
private:
	string name;

public:
	Light(const string &name)
	{
		this->name = name;
	}

	void on() 
	{ 
		cout << "light is on" << endl; 
	}

	void off() 
	{ 
		cout << "light is off" << endl; 
	}
};

#endif
