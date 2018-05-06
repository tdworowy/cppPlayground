#include <iostream>
#include "stocks00.h"


int main() {
	Stock floffy_the_cat;
	floffy_the_cat.acquire("TestC", 20, 12.60);
	floffy_the_cat.show();
	floffy_the_cat.buy(15, 18.20);
	floffy_the_cat.show();
	floffy_the_cat.sell(400, 20.20);
	floffy_the_cat.show();
	floffy_the_cat.buy(300000, 40.125);
	floffy_the_cat.show();
	floffy_the_cat.sell(300000, 0.125);
	floffy_the_cat.show();

}