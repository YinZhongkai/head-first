#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <iostream>
#include <string>

using namespace std;

class Beverage
{
public:
	string description;

	Beverage() { description = "Unknow Beverage"; }
	virtual string getDescription()  = 0;
	virtual double cost() = 0;
};

string Beverage::getDescription()
{
	return description;
}

#endif
