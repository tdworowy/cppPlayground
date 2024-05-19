#include "namesp.h"
#include <iostream>

namespace pers {
using std::cin;
using std::cout;

void getPerson(Person &rp) {
  cout << "First name: ";
  cin >> rp.fname;
  cout << "Last name: ";
  cin >> rp.lname;
}
void showPerson(const Person &rp) {
  std::cout << rp.lname << ", " << rp.fname << std::endl;
}
} // namespace pers
namespace debts {
void getDebt(Debt &rd) {
  getPerson(rd.name);
  std::cout << "Amount: ";
  std::cin >> rd.amount;
}
void showDebt(const Debt &rd) {
  showPerson(rd.name);
  std::cout << rd.amount << " $" << std::endl;
}
double sumDebts(const Debt ar[], int n) {
  double total = 0;

  for (int i = 0; i < n; i++) {
    total += ar[i].amount;
  }
  return total;
}
} // namespace debts