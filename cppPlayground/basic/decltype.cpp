#include <iostream>
int main() {
	int x = 2;
	int y = 3;
	decltype(x + y) z = x + y; // z will have same type as x+y 
	typedef decltype(x + y) xtype; // typ e alias
	std::cout << z;
}