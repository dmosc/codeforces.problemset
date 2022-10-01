/*
  https://codeforces.com/problemset/problem/282/A
*/

#include <iostream>

int main() {
  int n, x = 0;
  std::cin >> n;
  char c, tmp;
  while (n--) {
    std::cin >> tmp >> c >> tmp;
    x += c == '+' ? 1 : -1;
  }
  std::cout << x << std::endl;
}