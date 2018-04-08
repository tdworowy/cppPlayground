#include <iostream>
#include<string>

std::string func1(int);
std::string func2(int);
void run (std::string (*pf)(int),int);

int main() {

	run(func1,1);
	run(func2,2);
	std::string(*pa[2])(int) = {func1,func2};
	for (auto f : pa) {
		run(f,3);
	}
}

std::string func1(int number) {
	return "Number is: " + std::to_string(number);
}
std::string func2(int number) {
	return "Number +2 is: " + std::to_string(number+2);
}

void run(std::string(*pf)(int), int arg) {
	std::cout << pf(arg) << std::endl;

}

