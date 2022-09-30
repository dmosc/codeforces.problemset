/*
  https://codeforces.com/problemset/problem/4/A
*/

#include <iostream>

int main() {
  int kilos;
  std::cin >> kilos;
  std::cout << (kilos > 2 && kilos % 2 == 0 ? "YES" : "NO") << std::endl;
}