#include <iostream>

int main() {
	using namespace std;
	int updates = 6;
	int *p_updates;

	p_updates = &updates;

	cout << "updates value: " << updates << endl;
	cout << "*p_updates: " << *p_updates << endl;

	cout << "address &updates: " << &updates << endl;
	cout << "p_updates: " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "updates new value: " << updates << endl;

	cout << "Dinamic array" << endl;
	cout << "Size: ";
	int size;
	cin >> size;
	int * pointer_to_array = new int[size];
	cout << "Set new value: ";
	int value;
	cin >> value;
	cout << "set array index: ";
	int index;
	cin >> index;
	pointer_to_array[index] = value;
	cout << pointer_to_array[index];

}