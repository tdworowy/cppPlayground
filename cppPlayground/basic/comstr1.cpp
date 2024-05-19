#include <cstring>
#include <iostream>
int main() {

  char word[5] = "?ate";

  for (char ch = 'a'; strcmp(word, "mate"); ch++) {

    std::cout << word << std::endl;
    word[0] = ch;
  }
  std::cout << "Word is: " << word << std::endl;
}