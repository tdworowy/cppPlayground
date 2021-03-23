#include <iostream>
#include <cassert>

#define NoncommutativeAdditiveSemigroup typename

template <NoncommutativeAdditiveSemigroup A, int  N, typename operation>
A operations(A number1, N number2, operation op);
template <NoncommutativeAdditiveSemigroup A, int  N, typename operation>
A accumulate_operation(A result, N number1, N number2, operation op);
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
template <NoncommutativeAdditiveSemigroup A, int  N, typename operation>
A accumulate_operation(A result, N number1, N number2, operation op) {
	while (true) {
		if (odd(number1)) {
			result = op(result,number2;
			if (number1 == 1) return result;
		}
		number1 = half(number1);
		number2 = op(number2,number2;
	}
}
template <NoncommutativeAdditiveSemigroup A, int  N, typename operation>
A operations(A number1, N number2, operation op) {
	while (!odd(number1)) {
		number2 = op(number2 ,number2;
		number1 = half(number1);
	}
	if (number1 == 1) return number2;
	return accumulate_multi(number2, half(number1 - 1), op(number2,number2), op);
	}

template <int N>
bool odd(N number) {
	return number & 0x1;
}
template <int N>
N half(N number) {
	return number >> 1;
}

template<typename T>
T neutral_element_add(std::plus<T>) { return T(0); }
template<typename T>
T neutral_element_multi(std::multiplies<T>) { return T(0); }
