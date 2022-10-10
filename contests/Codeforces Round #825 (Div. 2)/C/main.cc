#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
  int n;
  std::cin >> n;
  int i = 0, count = 0, val;
  while (i < n) {
    std::cin >> val;
    if (val >= i) {
      ++count;
    }
    i++;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}