#ifndef __DECAF_H__
#define __DECAF_H__

#include <iostream>
#include <string>
#include "beverage.h"

class Decaf: public Beverage
{
public:
	Decaf() { description = "Decaf"; }
	string getDescription() { return description; }
	double cost() { return 1.05; }
};

#endif
