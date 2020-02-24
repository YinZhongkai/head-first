#ifndef __CURRENT_CONDITIONS_DISPLAY_H__
#define __CURRENT_CONDITIONS_DISPLAY_H__

#include <iostream>
#include "subject.h"
#include "displayelement.h"

using namespace std;

class CurrentConditionsDisplay: public Observer, public DisplayElement
{
private:
	float temperature;
	float humidity;
	Subject *weatherData;

public:
	CurrentConditionsDisplay(Subject *weatherData);	

	void update(float temperature, float humidity, float pressure);
	void display();
};

#endif
