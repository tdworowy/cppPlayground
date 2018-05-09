#include <iostream>
#include "mytime.h"

Time::Time() {
	hours = minuts = 0;
}
Time::Time(int h, int m) {
	hours = h;
	minuts = m;
}
void Time::addMin(int m) {
	minuts += m;
	hours += minuts / 60;
	minuts %= 60;
}
void Time::addHr(int h) {
	hours += h;
}
void Time::reset(int h,int m){
	hours = h;
	minuts = m;
}
Time Time::sum(const Time & t) const {
	Time sum;
	sum.minuts = minuts + t.minuts;
	sum.hours = hours + t.hours + sum.minuts / 60;
	sum.minuts %= 60;
	return sum;
}
Time Time::operator+(const Time & t) const {
	return Time::sum(t);
}
void Time::show()const {
	std::cout << hours << " hours, " << minuts << " minuts" << std::endl;
}