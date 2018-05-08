#include <iostream>
#include <cctype>
#include "stack.h"

int main() {

	//TODO
	Stack s1;
	char ch;
	unsigned long po;
	std::cout << "Press D to add staff, P to perform and K to end" << std::endl;

	while (std::cin >> ch && std::toupper(ch) != 'K') {
		while (std::cin.get() != '\n') {
			continue;
		}
		if (!std::isalpha(ch)) {
			std::cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':
			std::cout << "Enter number: ";
			std::cin >> po;
			if (s1.isfull())
				std::cout << "Stack is full!" << std::endl;
			else
				s1.push(po);
			break;
		case 'P':
		case 'p':
			if (s1.isempty())
				std::cout << "Stack is empty" << std::endl;
			else
			{
				s1.pop(po);
				std::cout << "Number: " << po << std::endl;
			}
			break;
		default:
			std::cout << "INCORECT" << std::endl;
			break;
		}
		std::cout << "Press D to add staff, P to perform and K to end" << std::endl;

	}
}