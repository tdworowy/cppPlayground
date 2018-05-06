#include <iostream>
#include "stocks00.h"


int main() {
	Stock floffy_the_cat = Stock("Test1", 20, 12.60); // create temporary object
	floffy_the_cat.show();
	floffy_the_cat.buy(15, 18.20);
	floffy_the_cat.show();
	floffy_the_cat.sell(400, 20.20);
	floffy_the_cat.show();
	floffy_the_cat.buy(300000, 40.125);
	floffy_the_cat.show();
	floffy_the_cat.sell(300000, 0.125);
	floffy_the_cat.show();

	Stock *floffy_the_cat2 = new Stock("Test2", 222, 222.60);
	Stock floffy_the_cat3 ("Test3", 333, 333.60);

	floffy_the_cat2->show();
	delete floffy_the_cat2;
	floffy_the_cat3.show();

}