#ifndef __STEREO_H__
#define __STEREO_H__

#include <iostream>
#include <string>

using namespace std;

class Stereo
{
private:
	string name;

public:
	Stereo(const string &name)
	{
		this->name = name;
	}

	void on()
	{
		cout << "stereo on" << endl;
	}

	void off()
	{
		cout << "stereo off" << endl;
	}

	void setCd()
	{
		cout << "stereo set CD" << endl;
	}

	void setDvd()
	{
		cout << "steero set DVD" << endl;
	}

	void setRadio()
	{
		cout << "stereo set radio" << endl;
	}

	void setVolume(int v)
	{
		cout << "stere set volume" << v << endl;
	}
};

#endif
