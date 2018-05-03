#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main() {
	std::cout << "Function main() addresses:" << std::endl;
	std::cout << &tom << "= &tom, " << &dick << " = &dick, " << &harry << " = &harry" << std::endl;
	remote_access();
}