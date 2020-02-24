#include <iostream>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

using namespace std;

int main(void)
{
	WeatherData *weatherData = new WeatherData();
	CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);

	weatherData->setMeasurements(80.0, 65.0, 30.4);
	weatherData->setMeasurements(82.0, 75.0, 39.4);
	weatherData->setMeasurements(87.0, 55.0, 60.4);

	return 0;
}
