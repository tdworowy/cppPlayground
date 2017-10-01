#include <iostream>
#include <string>
int main()
{
	using namespace std;
	char s[256];
	while (s != "exit") {
		cout << "Enter String: ";
		cin.getline(s, 256);
	    cout << "String is: " << s << endl;
		
	}

}