#include <iostream>
#include <string>
int minutesF(long long);
std::string  fizzBuzz(int);

int main()
{
	using namespace std;
	cout << fizzBuzz(100);
	cin.get();
}


std::string  fizzBuzz(int count) {
	
	std::string output = "";
	for (int i = 0; i < count; i++) {
		if (i % 3 == 0 & i % 5 == 0) {
			output = output + "fizzbuzz\n";
		}
		else if (i % 3 == 0) {
			output = output + "fizz\n";
		}
		else if (i % 5 == 0) {
			output = output + "buzz\n";
		}
	}
	return output;
}