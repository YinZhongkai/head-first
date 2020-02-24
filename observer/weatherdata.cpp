#include "weatherdata.h"

WeatherData::WeatherData()
{	
	observerList.clear();
};

void WeatherData::registerObserver(Observer *o)
{
	observerList.push_back(o);
}

void WeatherData::removeObserver(Observer *o)
{
	observerList.remove(o);
}

void WeatherData::notifyObserver()
{
	list<Observer *>::iterator it;
	for(it = observerList.begin(); it != observerList.end(); it++)
	{
		(*it)->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
