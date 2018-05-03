#include <iostream>
#include "head.h"

int tom = 3;
int dick = 30;
static int harry = 300;



int main() {
	std::cout << "Function main() addresses:" << std::endl;
	std::cout << &tom << "= &tom, " << &dick << " = &dick, " << &harry << " = &harry" << std::endl;
	remote_access();
}