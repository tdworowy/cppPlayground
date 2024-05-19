#include <iostream>
#include <string>

int main() {
  std::string word = "?ate";

  char ch = 'a';
  while (word != "mate") {
    std::cout << word << std::endl;
    word[0] = ch;
    ch++;
  }
  std::cout << "word is: " << word << std::endl;
}