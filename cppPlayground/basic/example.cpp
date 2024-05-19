#include <iostream>
struct my_struct {
  int year;
};

int main() {
  my_struct s01, s02, s03;
  s01.year = 1998;
  my_struct *pa = &s02;
  pa->year = 1999;
  my_struct trio[3];
  trio[0].year = 2003;
  std::cout << trio->year << std::endl;
  const my_struct *arp[3] = {&s01, &s02, &s03};
  std::cout << arp[1]->year << std::endl;
  const my_struct **ppa = arp;
  auto ppb = arp;
  std::cout << (*ppa)->year << std::endl;
  std::cout << (*(ppb + 1))->year << std::endl;
}