#include <iostream>
#include <algorithm>
#include <vector>

void solve() {
  int n, i = 0;
  std::cin >> n;
  std::vector<int> a(n);
  while (i < n) {
    std::cin >> a[i++];
  }
  std::sort(a.begin(), a.end());
  for (i = 0; i < a.size() - 1; i++) {
    if (a[i] == a[i + 1]) {
      std::cout << "NO" << std::endl;
      return;
    }
  }
  std::cout << "YES" << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}