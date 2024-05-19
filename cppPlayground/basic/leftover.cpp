#include <iostream>
unsigned long left(unsigned long, unsigned);
char *left(const char *str, int num = 1);

int main() {

  char *trip = "Hawaii!!";
  unsigned long number = 123456789;
  char *temp;
  for (int i = 1; i < 10; i++) {
    std::cout << left(number, i) << std::endl;
    temp = left(trip, i);
    std::cout << temp << std::endl;
    delete[] temp;
  }
}

unsigned long left(unsigned long num, unsigned ct) {
  unsigned digits = 1;
  unsigned long number = num;
  if (ct == 0 || num == 0)
    return 0;
  while (number /= 10)
    digits++;

  if (digits > ct) {
    ct = digits - ct;
    while (ct--)
      num /= 10;
    return num;
  } else
    return num;
}
char *left(const char *str, int num) {
  if (num < 0)
    num = 0;
  int i;
  char *p = new char[num + 1];
  for (i = 0; i < num && str[i]; i++)
    p[i] = str[i];
  while (i <= num)
    p[i++] = '\0';
  return p;
}