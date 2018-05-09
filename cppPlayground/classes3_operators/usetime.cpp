#include <iostream>
#include "mytime.h"

int main() {
	Time planing;
	Time coding(2, 30);
	Time fixing(5, 55);
	Time total1;
	Time total2;

	planing.show();
	coding.show();
	fixing.show();

	total1 = coding.sum(fixing);
	total2 = coding + fixing;

	total1.show();
	total2.show();
}