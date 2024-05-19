#include <iostream>
#include <stdio.h>
#include <string.h>

struct chaff {
  char dross[20];
  int slag;
};

int main() {
  const int size = 2;

  auto arr = new chaff[size];
  strncpy(arr[0].dross, "Test1", sizeof(arr[0].dross));
  arr[0].slag = 1;
  strncpy(arr[1].dross, "Test2", sizeof(arr[0].dross));
  arr[1].slag = 2;

  for (int i = 0; i < size; i++) {
    std::cout << "dorss: " << arr[i].dross << std::endl;
    std::cout << "slag: " << arr[i].slag << std::endl;
  }
}