#include <iostream>
#include <string>

void show_string(std::string*, int repeat = 0);

int main() {
	std::string test1 = "Test1";
	std::string test2 = "Test2";
	std::string test3 = "Test3";
	std::string test4 = "Test4";
	std::string *p = & test3;
	show_string(&test1);
	show_string(&test2);
	show_string(p);
	
	show_string(&test4,1);

}

void show_string(std::string * message, int repeat) {
	static unsigned int call_count = 0;
	call_count++;

	if (repeat == 0)
		std::cout << *message<<std::endl;
	else {

		for (int i = 0; i < call_count; i++) {

			std::cout << *message << std::endl;

		}
	}
}
