#ifndef __DUCK_SIMULATOR_H__
#define __DUCK_SIMULATOR_H__

#include "MallarDuck.h"
#include "RedHeadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "GooseAdapter.h"
#include "Goose.h"
#include <string>
#include "QuackCount.h"
#include "AbstractDuckFactory.h"
#include "Flock.h"
#include "Quackologist.h"

using namespace std;

class DuckSimulator
{
public:
	void simulate(AbstructDuckFactory *duckFactory)
	{
		Quackable *redHeadDuck = duckFactory->createRedheadDuck();
		Quackable *duckCall = duckFactory->createDuckCall();
		Quackable *rubberDuck = duckFactory->createRubberDuck();
		Quackable *gooseDuck = duckFactory->createGooseAdapter();
		
		Flock *flockOfDucks = new Flock();
		flockOfDucks->add(redHeadDuck);
		flockOfDucks->add(duckCall);
		flockOfDucks->add(rubberDuck);
		flockOfDucks->add(gooseDuck);

		Quackable *mallarDuck0 = duckFactory->createMallerdDuck();
		Quackable *mallarDuck1 = duckFactory->createMallerdDuck();
		Quackable *mallarDuck2 = duckFactory->createMallerdDuck();
		Quackable *mallarDuck3 = duckFactory->createMallerdDuck();
		Quackable *mallarDuck4 = duckFactory->createMallerdDuck();

		Flock *flockofMallars = new Flock();
		flockofMallars->add(mallarDuck0);
		flockofMallars->add(mallarDuck1);
		flockofMallars->add(mallarDuck2);
		flockofMallars->add(mallarDuck3);
		flockofMallars->add(mallarDuck4);

		flockOfDucks->add(flockofMallars);

		cout << "Duck Simulator: Whole Flock Simulation" << endl;
		
		Quackologist *quackologist = new Quackologist();
		flockOfDucks->registerObserver(quackologist);
		simulate(flockOfDucks);

		cout << endl;
		cout << "Duck Simulation: Mallard Flock DuckSimulator" << endl;
		simulate(flockofMallars);

		cout << "The ducks quacked " << QuackCount::getNumberOfQuacks() << " times" << endl;
	}
	void simulate(Quackable *duck)
	{
		duck->quack();
	}
};

#endif
