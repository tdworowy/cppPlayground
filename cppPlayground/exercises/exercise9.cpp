#include <iostream>
#include <string>
struct bar {
  std::string mark;
  float weight;
  int calories;
};
const std::string default_name = "Millennium Munch";
const std::string new_name = "New name";
void set_bar(bar &bar, const std::string *name = &default_name,
             const double weight = 2.85, const int calories = 350);
void show_bar(const bar &bar);

int main() {
  bar bar1;
  set_bar(bar1);
  show_bar(bar1);

  set_bar(bar1, &new_name, 12.2, 100);
  show_bar(bar1);
}

void set_bar(bar &bar, const std::string *name, const double weight,
             const int calories) {
  bar.mark = *name;
  bar.weight = weight;
  bar.calories = calories;
}
void show_bar(const bar &bar) {
  std::cout << bar.mark << std::endl;
  std::cout << bar.weight << std::endl;
  std::cout << bar.calories << std::endl;
}