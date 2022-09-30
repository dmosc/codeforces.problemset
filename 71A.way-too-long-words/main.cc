/*
  https://codeforces.com/problemset/problem/71/A
*/

#include <iostream>

int main() {
  int words, size;
  std::cin >> words;
  std::string word;
  while (words--) {
    std::cin >> word;
    size = word.size();
    if (size > 10) {
      std::cout << word[0] << size - 2 << word[size - 1] << std::endl;
    } else {
      std::cout << word << std::endl;
    }
  }
}