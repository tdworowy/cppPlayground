#include <iostream>
#include <string>
void func1(void);

int main()
{
	func1();

}



void func1(void) {

	using namespace std;
	char s[256];
	while (s != "exit") {
		cout << "Enter String: ";
		cin.getline(s, 256);
		cout << "String is: " << s << endl;

	}

}