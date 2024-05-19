#include <iostream>
#include <string>
template <typename N> N max5(N table[]);

template <typename N> N max(N table[], int size);

const std::string *max(std::string table[], int size);

int main() {

  int l1[5] = {0, 2, 20, 12, 1};
  double l2[5] = {0, 2.2, 20.1, 12, 1.99};

  std::cout << max5(l1) << std::endl;
  std::cout << max5(l2) << std::endl;

  std::cout << max(l1, 5) << std::endl;
  std::cout << max(l2, 5) << std::endl;

  std::string str_table[5] = {"Test1AAAA", "Test2", "Test3", "Test4aa",
                              "Test5"};

  std::cout << *max(str_table, 5) << std::endl;
}

template <typename N> N max5(N table[]) {
  N max = 0;
  for (int i = 0; i < 5; i++) {
    if (table[i] > max) {
      max = table[i];
    }
  }
  return max;
}

template <typename N> N max(N table[], int size) {
  N max = 0;
  for (int i = 0; i < size; i++) {
    if (table[i] > max) {
      max = table[i];
    }
  }
  return max;
}
const std::string *max(std::string table[], int size) {
  int max_lenght = 0;
  int id = 0;
  for (int i = 0; i < size; i++) {
    if (table[i].length() > max_lenght) {
      max_lenght = table[i].length();
      id = i;
    }
  }
  return &table[id];
}