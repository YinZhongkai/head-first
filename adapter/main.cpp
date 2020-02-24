#include "turkeyadapter.h"
#include "mallarduck.h"
#include "wildturkey.h"

void testDuck(Duck *pDuck)
{
	pDuck->quack();
	pDuck->fly();
}

int main(void)
{
	MallarDuck *pDuck = new MallarDuck();

	WildTurkey *pTurkey = new WildTurkey();
	TurkeyAdapter *pAdapter = new TurkeyAdapter(pTurkey);

	pTurkey->gobble();
	pTurkey->fly();


	testDuck(pDuck);
	
	testDuck(pAdapter);

	return 0;
}
