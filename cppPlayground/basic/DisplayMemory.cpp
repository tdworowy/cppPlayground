#include <iostream>
#include <string>
void func1(void);

int main() {
  while (true) {
    func1();
  }
}

void func1(void) {

  using namespace std;
  int i;
  cout << "Enter INT: ";
  cin >> i;
  cout << &i;
}