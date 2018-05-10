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
Time Time::subtraction(const Time & t) const {
	Time subtraction;
	int temp_minutes = minuts + (hours * 60);
	int temo_t_minutes = t.minuts + (t.hours * 60);
	subtraction.hours = (temp_minutes - temo_t_minutes) / 60;
	subtraction.minuts = (temp_minutes - temo_t_minutes) % 60;
	
	return subtraction;
}

Time Time::operator+(const Time & t) const {
	return Time::sum(t);
}
Time Time::operator-(const Time & t) const {
	return Time::subtraction(t);
}
void Time::show()const {
	std::cout << hours << " hours, " << minuts << " minuts" << std::endl;
}