/*
  https://codeforces.com/problemset/problem/263/A
*/

#include <iostream>

int main() {
  int i = 0, j = 0, k;
  while (i < 5) {
    j = 0;
    while (j < 5) {
      std::cin >> k;
      if (k) {
        std::cout << abs(2 - i) + abs(2 - j) << std::endl;
        exit(0);
      }
      ++j;
    }
    ++i;
  }
}