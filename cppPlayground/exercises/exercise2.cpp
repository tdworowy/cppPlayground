#include <iostream>
char * months[12]=
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};
int profit_per_month[12];

int main() {
	int i = 0;
	int temp=0;
	for (char *month : months) {
		std::cout << "give a profit for " << month << ": ";
		std::cin >> temp;
		std::cout << std::endl;
		profit_per_month[i] = temp;
		i++;
	}
	int profit=0;
	for (int i : profit_per_month) {
		profit = profit + i;
	}
	std::cout << "Profit for all is: " << profit;
}