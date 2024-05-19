#include "stocks00.h"
#include <iostream>

Stock::Stock(const std::string &co, long n, double pr) { acquire(co, n, pr); }
Stock::Stock() {
  company = "NO NAME";
  shares = 0;
  shares_val = 0;
  total_val = 0;
}
Stock::~Stock() { std::cout << "Destructor call!" << std::endl; }

void Stock::acquire(const std::string &co, long n, double pr) {
  company = co;
  if (n < 0) {
    std::cout << "shares noumber can't be negative " << std::endl;
    std::cout << "Default shares number is 0 " << std::endl;
    shares = 0;
  } else {
    shares = n;
  }
  shares_val = pr;
  set_total();
}
void Stock::buy(long num, double price) {
  if (num < 0) {
    std::cout << "shares noumber can't be negative " << std::endl;

  } else {
    shares += num;
    shares_val = price;
    set_total();
  }
}
void Stock::sell(long num, double price) {
  if (num < 0) {
    std::cout << "shares noumber can't be negative " << std::endl;

  } else if (num > shares) {
    std::cout << "Can't sell more shares than " << shares << std::endl;

  } else {
    shares -= num;
    shares_val = price;
    set_total();
  }
}
void Stock::update(double price) {
  shares_val = price;
  set_total();
}

void Stock::show() const {
  std::streamsize prec = std::cout.precision(3);
  std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed);

  std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
  std::cout.precision(2);
  std::cout << "Company: " << company << std::endl
            << "Shares count: " << shares << std::endl
            << "Share price: " << shares_val << "$" << std::endl
            << "Shares total price: " << total_val << "$" << std::endl;

  std::cout.precision(prec);
  std::cout.setf(orig, std::ios_base::floatfield);
}
const Stock &Stock::topval(const Stock &s) const {
  if (s.total_val > total_val)
    return s;
  else
    return *this;
}