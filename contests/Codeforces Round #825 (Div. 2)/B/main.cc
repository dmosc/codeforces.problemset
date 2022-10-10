#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n), b(n + 1);
  int i = 0;
  bool allLessThanOne = true;
  while (i < n) {
    std::cin >> a[i];
    if (a[i] > 1) allLessThanOne = false;
    ++i;
  }
  if (n < 2 || allLessThanOne) {
    std::cout << "YES" << std::endl;
    return;
  }
  b[0] = a[0] * 2;
  b[1] = a[0] * 3;
  for (i = 1; i < n; ++i) {
    if (b[i] % (a[i] * 2) == 0) {
      b[i + 1] = a[i] * 2;
    } else {
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