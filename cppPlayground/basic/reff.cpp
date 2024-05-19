#include <iostream>

int &reffTest(int &);

int main() {
  int x = 2;
  std::cout << "x: " << x << std::endl;
  std::cout << "reffTest: " << reffTest(x) << std::endl;
  reffTest(x) = 10;
  std::cout << "x: " << x << std::endl;
  std::cout << "reffTest: " << reffTest(x) << std::endl;
}
int &reffTest(int &ref_param) { return ref_param; }
