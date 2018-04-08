#include <iostream>

inline double sqr(double x) { return x * x; }

int main() {
	std::cout << sqr(10) << std::endl;
	std::cout << sqr(100) << std::endl;
	std::cout << sqr(5) << std::endl;
}