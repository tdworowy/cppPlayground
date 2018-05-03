#include <iostream>
#include <new>
const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main() {
	double *pd1, *pd2;
	int i;
	std::cout << "First call of new and local new: "<< std::endl;
	pd1 = new double[N];
	pd2 = new (buffer) double[N];
	for (i = 0; i < N; i++) {
		pd2[i] = pd1[i] = 1000 * 20.0 * 1;
	}
	std::cout << "Address:" << std::endl << "Heap: " << pd1
		<< " Static mempry: " << (void*)buffer << std::endl;

	std::cout << "Memory content: " << std::endl;
	for (i = 0; i < N; i++) {
		std::cout << pd1[i] << " address: " << &pd1[i] << "; ";
		std::cout << pd2[i] << " address: " << &pd2[i] <<std::endl;
	}
	std::cout << "Second call of new and local new: " << std::endl;
	double *pd3, *pd4;
	pd3 = new double[N];
	pd4 = new (buffer) double[N];
	for (i = 0; i < N; i++) {
		pd4[i] = pd3[i] = 1000 * 40.0 * 1;
	}
	std::cout << "Memory content: " << std::endl;
	for (i = 0; i < N; i++) {
		std::cout << pd3[i] << " address: " << &pd3[i] << "; ";
		std::cout << pd4[i] << " address: " << &pd4[i] << std::endl;
	}

	std::cout << "Third call of new and local new: " << std::endl;
	delete[] pd1;
	pd1 = new double[N];
	pd2 = new (buffer+N * sizeof(double)) double[N];
	for (i = 0; i < N; i++) {
		pd2[i] = pd1[i] = 1000 * 60.0 * 1;
	}
	std::cout << "Memory content: " << std::endl;
	for (i = 0; i < N; i++) {
		std::cout << pd3[i] << " address: " << &pd3[i] << "; ";
		std::cout << pd4[i] << " address: " << &pd4[i] << std::endl;
	}
	delete [] pd1;
	delete [] pd3;
}