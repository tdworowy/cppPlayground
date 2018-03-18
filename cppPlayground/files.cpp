#include <fstream>
#include <iostream>
#include <ctime>
int main() {
	std::ofstream out_file;
	std::ifstream in_file;
	out_file.open("Test.txt");

	for (long i = 0; i < 100; i++) {
		std::srand(time(NULL));
		out_file << std::rand() % 100 << std::endl;
	}
	out_file.close();
	in_file.open("Test.txt");

	if (!in_file.is_open()) {
		std::cout << "Can't open file" << std::endl;
	}
	double value;
	double sum;
	double count;
	in_file >> value;
	while (in_file.good())
	{
		++count;
		sum += value;
		in_file >> value;
	}
	if (in_file.eof()) {
		std::cout << "End of file" << std::endl;
	}
	else if (in_file.fail())
	{
		std::cout << "FAIL" << std::endl;
	}
	if (count == 0) {
		std::cout << "NO data in file" << std::endl;
	}
	else
	{
		std::cout << "Elements: " <<count<< std::endl;
		std::cout << "Sum: " <<sum<< std::endl;
		std::cout << "Average: " <<sum / count<< std::endl;

	}
	in_file.close();
}