#include <iostream>
int percentage(int,double);
int main() {

	int person1_capital = 100;
	int person2_capital = 100;
	int year = 1;
	int person1_profit = 0;
	int person2_profit = 0;

	while (person2_capital <= person1_capital) {
		person1_profit = percentage(100, 0.10);
		person1_capital = person1_capital + person1_profit;
		person2_profit = percentage(person2_capital, 0.05);
		person2_capital = person2_capital + person2_profit;
		year++;
	}
	std::cout << "Year number: " << year << std::endl;
	std::cout << "Person1 capital: " << person1_capital << std::endl;
	std::cout << "Person2 capital: " << person2_capital << std::endl;

}

int percentage(int invest, double percent) {

	return invest * percent;

}