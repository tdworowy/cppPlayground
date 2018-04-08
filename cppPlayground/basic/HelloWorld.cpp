#include <iostream>
#include <string>
int main()
{
	using namespace std;
	for (int i=0; i < 20; i++)
	{
		//std::string s = std::to_string(i);
		string s = to_string(i);
		cout << "Hellow World!"+s << endl;
	}
	cin.get();
	return 0;
}