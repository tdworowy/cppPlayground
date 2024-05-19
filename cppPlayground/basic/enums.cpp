#include <iostream>
enum spectrum { red, green, blue };

int main() {
  spectrum sp1;
  sp1 = red;
  std::cout << sp1 << std::endl;
  sp1 = green;
  std::cout << sp1 << std::endl;
  sp1 = spectrum(2);
  std::cout << sp1 << std::endl;
}