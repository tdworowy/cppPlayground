#include <iostream>
int main() {
	int x;
	std::cin >> x;
	
	int y = x >= 0 ? x : -x;
	std::cout << y;
}