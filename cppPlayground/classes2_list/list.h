#ifndef LIST_H_
#define LIST_H_

typedef unsigned long Item;
class List {
private:
  enum { MAX = 10 };
  Item items[MAX] = {0};
  int last;

public:
  List();
  bool isempty() const;
  bool isfull() const;
  bool add(const Item &item);
  void visit(int index, void (*pf)(Item *item));
};
#endif