#include "duck.h"

Duck::Duck()
{
	flyBehavior = new FlyBehavior();
	quackBehavior = new QuackBehavior();
}

Duck::~Duck()
{

}

void Duck::performFly()
{
	delete flyBehavior;
	delete quackBehavior;	
};

void Duck::performQuack()
{
	flyBehavior->fly();
};

void Duck::display()
{
	quackBehavior->quack();
};
