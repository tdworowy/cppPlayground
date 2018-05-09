#include <iostream>
void display_element(int * element) {
	std::cout << "Element value: " << *element << std::endl;
}
void power_element(int * element) {
	*element = pow(*element, 2);

}
int main() {
	int ele = 10;
	display_element(&ele);
	power_element(&ele);
}
