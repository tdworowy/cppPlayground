#include "head.h"
#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access() {
  std::cout << "Function remot_access() addresses:" << std::endl;
  std::cout << &tom << "= &tom, " << &dick << " = &dick, " << &harry
            << " = &harry" << std::endl;
}