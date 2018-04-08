#include <iostream>
union one4all {
	int int_val;
	long long_val;
	double double_val;
};

int main()
{
	one4all union_value;
	union_value.int_val = 10;
	std::cout << union_value.int_val << std::endl;
	union_value.double_val = 20.2;
	std::cout << union_value.double_val << std::endl;
	union_value.long_val = 30.3;
	std::cout << union_value.long_val << std::endl;
	std::cout << "_____________" << std::endl;
	std::cout << union_value.int_val << std::endl;
	std::cout << union_value.double_val << std::endl;
}