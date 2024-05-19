#include <iostream>
#include <string>
struct test1 {
  std::string name1;
  std::string name2;
};

int main() {
  using namespace std;
  test1 *ps = new test1;
  ps->name1 = " Name1 ";
  ps->name2 = " Name2 ";

  cout << ps->name1;
  cout << ps->name2;
}