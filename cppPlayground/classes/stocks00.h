#ifndef STOCK_H_
#define STOCK_H_

#include <string>

class Stock {

private:
  std::string company;
  long shares;
  double shares_val;
  double total_val;
  void set_total() { total_val = shares * shares_val; }

public:
  Stock();
  Stock(const std::string &co, long n = 0, double pr = 0.0);
  ~Stock();
  void acquire(const std::string &co, long n, double pr);
  double total() const { return total_val; }
  const Stock &topval(const Stock &s) const;
  void buy(long num, double price);
  void sell(long num, double price);
  void update(double price);
  void show() const;
};
#endif
