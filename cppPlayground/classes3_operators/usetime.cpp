#include "mytime.h"

int main() {
  Time planing;
  Time coding(2, 30);
  Time fixing(5, 55);
  Time coding2(3, 0);
  Time fixing2(3, 0);

  std::cout << "Planing: " << planing << "Coding: " << coding
            << "Fixing: " << fixing << std::endl;

  std::cout << "add" << std::endl;
  Time total1 = coding.sum(fixing);
  Time total2 = coding + fixing;
  std::cout << total1 << std::endl;
  std::cout << total2 << std::endl;

  std::cout << "subtraction" << std::endl;
  Time total3 = fixing - coding;
  Time total4 = coding - fixing;
  Time total5 = coding2 - fixing2;
  Time total6 = Time(0, 45) - Time(0, 20);
  Time total7 = Time(1, 0) - Time(0, 20);
  std::cout << total3 << std::endl;
  std::cout << total4 << std::endl;
  std::cout << total5 << std::endl;
  std::cout << total6 << std::endl;
  std::cout << total7 << std::endl;

  std::cout << "multiplication" << std::endl;
  Time total8 = Time(12, 30) * 10;
  Time total9 = 10 * Time(12, 30);
  Time total10 = 2 * Time(0, 36);
  Time total11 = Time(0, 46) * 2;
  std::cout << total8 << std::endl;
  std::cout << total9 << std::endl;
  std::cout << total10 << std::endl;
  std::cout << total11 << std::endl;
}