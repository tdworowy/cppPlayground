#include <iostream>

int multi(int, int);
bool odd(int);
int half(int);

int main() {
	std::cout << multi(9, 9) << std::endl;
	std::cout << multi(99, 99) << std::endl;
	std::cout << multi(2, 2) << std::endl;
}
int multi(int number1, int number2) {
	if (number1 == 1) return number2;
	int result = multi(half(number1), number2 + number2);
	if (odd(number1)) result = result + number2;
	return result;
	}
bool odd(int number) {
	return number & 0x1;
}
int half(int number) {
	return number >> 1;
}