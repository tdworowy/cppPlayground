#include <iostream>
#include <string>
int main()
{
	using namespace std;
	for (int i=0; i < 20; i++)
	{
		std::string s = std::to_string(i);
		cout << "Hellow World!"+s+"\n";
	}
	cin.get();
	return 0;
}