#include <iostream>
#include "mytime.h"

int main() {
	Time planing;
	Time coding(2, 30);
	Time fixing(5, 55);
	Time coding2(3, 0);
	Time fixing2(3, 0);
	Time total1;
	Time total2;
	Time total3;
	Time total4;
	Time total5;
	Time total6;
	Time total7;

	planing.show();
	coding.show();
	fixing.show();

	std::cout << "add" << std::endl;
	total1 = coding.sum(fixing);
	total2 = coding + fixing;
	std::cout << "subtraction" << std::endl;
	total3 = fixing - coding;
	total4 = coding - fixing;
	total5 = coding2 - fixing2;
	total6 = Time(0, 45) - Time(0, 20);
	total7 = Time(1, 0) - Time(0, 20);
	
	total1.show();
	total2.show();
	total3.show();
	total4.show();
	total5.show();
	total6.show();
	total7.show();
}