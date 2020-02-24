#include <iostream>
#include "MenuComponent.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Waitress.h"

using namespace std;

int main(void)
{
	MenuComponent *pancakeHouseMenu = new Menu("Pancake House Menu", "Breakfast");
	MenuComponent *dinerMenu 		= new Menu("Diner Menu", "Lunch");
	MenuComponent *dessertMenu		= new Menu("Desser Menu", "Dessert of course");

	MenuComponent *allMenu = new Menu("All Menu", "All menus combined");

	allMenu->add(pancakeHouseMenu);
	allMenu->add(dinerMenu);
	allMenu->add(dessertMenu);

	pancakeHouseMenu->add(new MenuItem("K&B's Pancake Breakfast", "Pancake with scrambled eggs, and toast", true, 2.99));
	pancakeHouseMenu->add(new MenuItem("Regular Pancake Breakfast", "Pancake with fried eggs, sausage", false, 2.99));
	pancakeHouseMenu->add(new MenuItem("Blueberry Pancakes", "Pancake made with fresh blueberries, and blueberry syrup", true, 3.49));
	pancakeHouseMenu->add(new MenuItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59));

	dinerMenu->add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
	dinerMenu->add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 3.05));
	dinerMenu->add(new MenuItem("Hotdog", "A hot dog, with saurkraut, relish , onions, topped with cheese", false, 3.05));
	dinerMenu->add(new MenuItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99));
	dinerMenu->add(new MenuItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89));

	dessertMenu->add(new MenuItem("Apple Pie", "Apple pie with a flakey crust, topped with vanilla ice cream", true, 1.59));
	dessertMenu->add(new MenuItem("Chesscake", "Creamy New York chesscake, with a chocolate graham crusst", false, 1.89));
	dessertMenu->add(new MenuItem("Sorbet", "A scoop of raspberry and a scoop of lime", true, 1.89));


	Waitress *waitress = new Waitress(allMenu);
	waitress->printMenu();

	return 0;
}
