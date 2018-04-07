#include <iostream>

long int multi(long int, long int);
bool odd(long int);
long int half(long int);

int main() {
	std::cout << multi(9, 9) << std::endl;
	std::cout << multi(99, 99) << std::endl;
	std::cout << multi(2, 2) << std::endl;
	std::cout << multi(4, 4) << std::endl;
	std::cout << multi(999, 999) << std::endl;
	std::cout << multi(9999, 9999) << std::endl;
}
long int multi(long int number1, long int number2) {
	if (number1 == 1) return number2;
	long int result = multi(half(number1), number2 + number2);
	if (odd(number1)) result = result + number2;
	return result;
	}
bool odd(long int number) {
	return number & 0x1;
}
long int half(long int number) {
	return number >> 1;
}