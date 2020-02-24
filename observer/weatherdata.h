#ifndef __WEATHERDATA_H__
#define __WEATHERDATA_H__

#include "subject.h"
#include <list>
#include <iostream>
#include "observer.h"

using namespace std;

class WeatherData: public Subject
{
private:
	list<Observer *> observerList;	
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData();

	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	void notifyObserver();
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
};

#endif
