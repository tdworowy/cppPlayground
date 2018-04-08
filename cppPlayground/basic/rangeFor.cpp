#include <iostream>
int main() {
	double prices[5] = { 4.33,1.22,6.89,10.99,101.99 };
	for (double i : prices) {
		std::cout << i << std::endl;
	}
}