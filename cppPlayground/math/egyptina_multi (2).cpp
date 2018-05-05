#include <iostream>
#include <cassert>
//DON'T WORK 
#define NoncommutativeAdditiveSemigroup typename

template <NoncommutativeAdditiveSemigroup A, int  N>
A multi(N number1, N number2);
template <NoncommutativeAdditiveSemigroup A, int  N>
A accumulate_multi(A result, N number1, N number2);
template <int  N>
bool odd(N);
template <int  N>
N half(N);

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
template <NoncommutativeAdditiveSemigroup A, int  N>
A accumulate_multi(A result, N number1, N number2) {
	while (true) {
		if (odd(number1)) {
			result = result + number2;
			if (number1 == 1) return result;
		}
		number1 = half(number1);
		number2 = number2 + number2;
	}
}
template <NoncommutativeAdditiveSemigroup A, int  N>
A multi(N number1, A number2) {
	while (!odd(number1)) {
		number2 = number2 + number2;
		number1 = half(number1);
	}
	if (number1 == 1) return number2;
	return accumulate_multi(number2, half(number1 - 1), number2 + number2);
	}

template <int N>
bool odd(N number) {
	return number & 0x1;
}
template <int N>
N half(N number) {
	return number >> 1;
}