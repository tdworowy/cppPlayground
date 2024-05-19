#include <iostream>

int main() {

  int x = 101;
  int &y = x;
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
  std::cout << "addres of x: " << &x << std::endl;
  std::cout << "addres of y: " << &y << std::endl;
  y++;

  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
}