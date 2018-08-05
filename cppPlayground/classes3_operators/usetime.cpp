#include <iostream>
#include "mytime.h"

int main() {
	Time planing;
	Time coding(2, 30);
	Time fixing(5, 55);
	Time coding2(3, 0);
	Time fixing2(3, 0);
	
	planing.show();
	coding.show();
	fixing.show();

	std::cout << "add" << std::endl;
	Time total1 = coding.sum(fixing);
	Time total2 = coding + fixing;
	total1.show();
	total2.show();

	std::cout << "subtraction" << std::endl;
	Time total3 = fixing - coding;
	Time total4 = coding - fixing;
	Time total5 = coding2 - fixing2;
	Time total6 = Time(0, 45) - Time(0, 20);
	Time total7 = Time(1, 0) - Time(0, 20);
	total3.show();
	total4.show();
	total5.show();
	total6.show();
	total7.show();

	std::cout << "multiplication" << std::endl;
	Time total8 = Time(12, 30) * 10;
	Time total9 =  10 * Time(12, 30);
	Time total10 = 2 * Time(0, 36);
	Time total11 = Time(0, 46) * 2;
	total8.show();
	total9.show();
	total10.show();
	total11.show();
}