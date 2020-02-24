#include "DuckSimulator.h"
#include "AbstractDuckFactory.h"
#include "CountingDuckFactory.h"

int main(void)
{
	DuckSimulator *simulate = new DuckSimulator();
	AbstructDuckFactory *duckFactory = new CountingDuckFactory();

	simulate->simulate(duckFactory);

	return 0;
}
