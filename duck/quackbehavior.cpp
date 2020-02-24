#include "quackbehavior.h"

void QuackBehavior::quack()
{
};	

void Quack::quack()
{
	cout << "Quack::quack()" << endl;
}

void Squeak::quack()
{
	cout << "Squeak::quack()" << endl;
}

void MuteQuack::quack()
{
	cout << "MuteQuack:;quack()" << endl;
}
