#include "list.h"

List::List() {
	last = 0;
	first = 0
}

bool List::isempty() const {
	return Last == 0;
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
void List::visit(void(*pf)(int index)) {
	if (index > max) {
		std::cout << "Index out of range";
	}
	pf(irems[index]); //TODo
	
}