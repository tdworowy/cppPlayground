#include <iostream>
#include <cassert>

long int multi(long int, long int);
long int accumulate_multi(long int, long int, long int);
bool odd(long int);
long int half(long int);

int main() {
	
	assert(multi(9, 9) == 81);
	assert(multi(99, 99) == 9801);
	assert(multi(2, 2) == 4);
	assert(multi(4, 4) == 16);
	assert(multi(999, 999) == 998001);
	assert(multi(9999, 9999) == 99980001);
	assert(multi(5, 9999) == 49995);
	assert(multi(9999, 5) == 49995);
	assert(multi(1, 5) == 5);
	assert(multi(5, 1) == 5);
	std::cout << "DONE" << std::endl;

}

long int accumulate_multi(long int result, long int number1, long int number2) {
	while (true) {
		if (odd(number1)) {
			result = result + number2;
			if (number1 == 1) return result;
		}
		number1 = half(number1);
		number2 = number2 + number2;
	}
}

long int multi(long int number1, long int number2) {
	if (number2 > number1) {
		long int temp = number1;
		long int number1 = number2;
		long int number2 = temp;
	}
	while (!odd(number1)) {
		number2 = number2 + number2;
		number1 = half(number1);
	}
	if (number1 == 1) return number2;
	return accumulate_multi(number2, half(number1 - 1), number2 + number2);
	}
bool odd(long int number) {
	return number & 0x1;
}
long int half(long int number) {
	return number >> 1;
}
