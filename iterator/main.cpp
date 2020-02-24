#include "waitress.h"

int main(void)
{
	DinerMenu *dinerMenu = new DinerMenu();

	Waitress *waitress = new Waitress(dinerMenu);
	waitress->printMenu();

	return 0;
}
