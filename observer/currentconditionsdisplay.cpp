#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData)
{
	this->weatherData = weatherData;	
	this->weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << endl;
}
