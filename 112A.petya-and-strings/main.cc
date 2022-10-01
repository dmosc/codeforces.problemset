/*
  https://codeforces.com/problemset/problem/112/A
*/

#include <iostream>

int main() {
  std::string a, b;
  std::cin >> a >> b;
  int i = 0;
  while (i < a.size()) {
    if (tolower(a[i]) != tolower(b[i])) {
      std::cout << (tolower(a[i]) - tolower(b[i]) < 0 ? -1 : 1) << std::endl;
      exit(0);
    }
    ++i;
  }
  std::cout << 0 << std::endl;
}