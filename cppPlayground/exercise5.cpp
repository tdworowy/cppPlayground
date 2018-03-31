//#include<bits/stdc++.h>
#include <iostream>
#include <string>
void print_from_arr(std::string arr[], int);

void main() {

	std::string test[5] = { "Test1", "Test2", "Test3", "Test4","Test5" };
	print_from_arr(test, 5);
	print_from_arr(test, 3);
	print_from_arr(test + 2, 2);

}	

void print_from_arr(std::string arr[], int size) {

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "__________" << std::endl;
}

