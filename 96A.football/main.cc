/*
  https://codeforces.com/problemset/problem/96/A
*/

#include <iostream>

int main() {
  std::string word;
  std::cin >> word;
  int count = 0;
  char pC;
  for (char &c : word) {
    if (pC == c) {
      ++count;
    } else {
      if (count >= 7) {
        break;
      }
      count = 1;
    }
    pC = c;
  }
  std::cout << (count >= 7 ? "YES" : "NO") << std::endl;
}