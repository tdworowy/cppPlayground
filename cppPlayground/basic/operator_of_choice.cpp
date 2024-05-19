#include <iostream>
int main() {
  int a, b;
  std::cout << "Enter 2 ints: ";
  std::cin >> a >> b;
  std::cout << "the larger of the numbers " << a << " and " << b;
  int c = a > b ? a : b;
  std::cout << " is " << c << std::endl;
}