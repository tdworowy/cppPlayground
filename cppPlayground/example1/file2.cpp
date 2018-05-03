#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xpos) {
	polar answer;

	answer.distance = sqrt(xpos.x * xpos.x + xpos.y * xpos.y);
	answer.angle = atan2(xpos.y, xpos.x);
	return answer;
}

void show_polar(polar dpos) {
	const double Rad_to_deg = 57.29577951;

	std::cout << "Distance: " << dpos.distance;
	std::cout << ", angle: " << dpos.angle * Rad_to_deg << " degrees" << std::endl;
}