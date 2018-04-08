#include <iostream>
#include <string>
void print_from_arr(const std::string * begin, const std::string * end);

void main() {

	std::string test[5] = { "Test1", "Test2", "Test3", "Test4","Test5" };
	print_from_arr(test, test+5);
	print_from_arr(test, test+2);
	print_from_arr(test + 2, test+4);

}

void print_from_arr(const std::string * begin, const std::string * end) {

	const std::string* pt;
	for (pt = begin; pt != end; pt++) {
		std::cout << *pt << std::endl;
	}
	std::cout << "__________" << std::endl;
}