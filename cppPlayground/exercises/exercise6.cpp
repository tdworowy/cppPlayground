#include <iostream>

int read_data(int [], int);
void display_date(int[],int);
int avg( int[],int);


int main() {
	const int init_size = 10;
	int resoult[init_size];
	int max = read_data(resoult, init_size);
	display_date(resoult, max);
	std::cout << std::endl << "Average is: " << avg(resoult, max);
}

int read_data(int resoults[], int size) {
	std::cout << "Set 10 resoults" << std::endl;
	std::cout << "To exti write -1" << std::endl;
	int temp;
	for (int i = 0; i < size; i++) {
		
		std::cin >> temp;
		if (temp == -1) {
			return i;
;
		}
		resoults[i] = temp;
	}
	return size;
}
void display_date(int resoults[], int size) {

	for (int i = 0; i < size; i++) {
		std::cout << resoults[i]<<" ";
	}
}
int avg(int resoults[], int size) {
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum += resoults[i];
	}
	return sum / size;
	
}
