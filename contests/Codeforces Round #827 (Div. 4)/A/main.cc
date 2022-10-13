#include <iostream>
#include <algorithm>

void solve() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int maxVal = std::max(std::max(a, b), c);
  if (maxVal - a - b - c == -maxVal) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}