#include "stocks00.h"
#include <iostream>

const int STKS = 4;
int main() {

  Stock stocks[STKS] = {Stock("Test1", 12, 20), Stock("Test2", 120, 200),
                        Stock("Test3", 2, 2000.10), Stock("Test4", 99, 0.2)};
  for (int i = 0; i < STKS; i++) {
    stocks[i].show();
  }
  const Stock *top = &stocks[0];
  for (int i = 0; i < STKS; i++) {
    top = &top->topval(stocks[i]);
  }
  std::cout << "Display top stock" << std::endl;
  top->show();
}