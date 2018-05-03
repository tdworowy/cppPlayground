#include <iostream>
#include "coordin.h"

int main() {
	rect rplace;
	polar pplace;

	std::cout << "X and Y: (q to exit)";
	while (std::cin >> rplace.x >> rplace.y) {
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
	}
	std::cout << "DONE" << std::endl;
}