#include <iostream>
#include <cctype>
#include <string>
#include "list.h"

void display_element(unsigned long * element);
void power_element(unsigned long * element);

int main() {

	List l1;
	char ch;
	unsigned long po;
	int index = 0;
	std::cout << "Press A to add elelment, D to display, P to lift up to powerand K to end" << std::endl;

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
		case 'A':
		case 'a':
			std::cout << "Enter number: ";
			std::cin >> po;
			if (l1.isfull())
				std::cout << "List is full!" << std::endl;
			else
				l1.add(po);
			break;
		case 'D':
		case 'd':
			if (l1.isempty())
				std::cout << "list is empty" << std::endl;
			else
			{
				std::cout << "Enter index: ";
				std::cin >> index;
				l1.visit(index, display_element);
				
			}
			break;
		case 'P':
		case 'p':
			if (l1.isempty())
				std::cout << "list is empty" << std::endl;
			else
			{
				std::cout << "Enter index: ";
				std::cin >> index;
				l1.visit(index, power_element);

			}
			break;
		default:
			std::cout << "INCORECT" << std::endl;
			break;
		}
		std::cout << "Press A to add elelment, D to display, P to lift up to power and K to end" << std::endl;

	}
}

void display_element(unsigned long * element) {
	std::cout << "Element value: " << *element << std::endl;
	}
void power_element(unsigned long * element) {
	*element = pow(*element,2);

}