#include "list.h"
#include <iostream>

List::List() {
	last = 0;
	}

bool List::isempty() const {
	return last == 0;
}

bool List::isfull() const {
	return last == MAX;
}

bool List::add(const Item & item) {
	if (last < MAX) {
		items[last++] = item;
		return true;
	}
	else
	{
		return false;
	}
}
void List::visit(int index, void(*pf)(Item * item))
{
	if (index > MAX) {
		std::cout << "Index out of range"<<std::endl;
	}
	pf(&(items[index])); 
	
}