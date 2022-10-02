#include <iostream>
#include <algorithm>

int main() {
  int t, n;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::cout << (n - 6) / 3 << std::endl;
  }
}