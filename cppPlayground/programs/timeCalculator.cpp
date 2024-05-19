#include <iostream>
int minutesF(long long);
int hoursF(int);
int daysF(int);

int main() {
  using namespace std;
  long long sec;
  int minutes;
  int hours;
  int days;

  while (1) {
    cout << "Enter seconds: ";
    cin >> sec;
    minutes = minutesF(sec);
    hours = hoursF(minutes);
    days = daysF(hours);

    cout << "seconds: " << sec % (minutes) << endl;
    cout << "Miutes: " << minutes % (hours) << endl;
    cout << "hours: " << hours % (days) << endl;
    cout << "days: " << days << endl;
  }
}

int minutesF(long long seconds) { return seconds / 60; }
int hoursF(int minutes) { return minutes / 60; }
int daysF(int hours) { return hours / 24; }
