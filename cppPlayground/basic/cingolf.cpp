#include <iostream>
const int max = 5;
int main() {
	int golf[max];
	std::cout << "Set scores for 5 games" << std::endl;
	for (int i = 0; i < max; i++) {
		std::cout << "Round " << i + 1 << ".: ";
		while (!(std::cin >> golf[i])) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Pleas give me a number: ";
		}
	}
	double total = 0.0;
	for (int i = 0; i < max; i++) {
		total += golf[i];
	}
	std::cout << total / max << " = average resoult from " << max << " rounds" << std::endl;
}