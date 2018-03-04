#include <iostream>
int main() {

	char ch;
	int count = 0;
	while (std::cin.get(ch)) {
		std::cout << ch;
		++count;
	}
	std::cout << std::endl << "Characters: " << count << std::endl;
}