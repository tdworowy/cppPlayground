#include <iostream>

int main() {
  using namespace std;
  int *pointer = new int;

  *pointer = 10;
  cout << *pointer << endl;
  cout << pointer << endl;
  delete pointer;
  cout << "After delete" << endl;
  cout << *pointer << endl;
  cout << pointer << endl;
}