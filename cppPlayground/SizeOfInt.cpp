#include <iostream>
#include <string>


int main()
{	
	using namespace std;
	int n_int = INT_MAX;
	int n_short = SHRT_MAX;
	int n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int has " << sizeof(int) << "bytes" << endl;
	cout << "short has " << sizeof n_short << "bytes" << endl;
	cout << "logn has " << sizeof n_long << "bytes" << endl;
	cout << "long  has " << sizeof n_llong<< "bytes" << endl;
	cout << endl;

	
	cout << "Max int: " << n_int << endl;
	cout << "Max short: " << n_short << endl;
	cout << "Max long: " << n_long << endl;
	cout << "Max long long: " << n_llong << endl;

	n_int = INT_MIN;
	n_short = SHRT_MIN;
	n_long = LONG_MIN;
	n_llong = LLONG_MIN;

	cout << "Min int: " << n_int << endl;
	cout << "Min short: " << n_short << endl;
	cout << "Min long: " << n_long << endl;
	cout << "Max long long: " << n_llong << endl;


}