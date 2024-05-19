#include <iostream>
long long int factorial(long int);
long long int factorial2(long int);

int main() {
  int input;
  while (std::cin >> input) {

    std::cout << input << "! = " << factorial(input) << std::endl;
    std::cout << input << "! = " << factorial2(input) << std::endl;
  }
}

long long int factorial(long int number) {
  if (number == 0) {
    return 1;
  }
  return number * factorial(number - 1);
}
long long int factorial2(long int number) {
  long long int result = 1;
  for (int i = 1; i <= number; i++) {
    result = result * i;
  }

  return result;
}
