#include <iostream>

int main() {
  long long a = 0;
  long long b = 1;
  long long temp = 0;
  for (long long i = 0; i < 50; i++) {
    temp = a;
    a = a + b;
    b = temp;
  }

  std::cout << b << std::endl;
}