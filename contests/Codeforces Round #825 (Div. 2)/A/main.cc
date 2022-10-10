#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
  int i, n;
  std::cin >> n;
  std::vector<int> a(n), b(n);
  i = 0;
  while (i < n) {
    std::cin >> a[i++];
  }
  i = 0;
  while (i < n) {
    std::cin >> b[i++];
  }
  int dOnes = 0, dZeroes = 0;
  for (i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      if (a[i] == 1) {
        dOnes++;
      } else {
        dZeroes++;
      }
    }
  }
  if (!dZeroes) {
    std::cout << dOnes << std::endl;
  } else if (!dOnes) {
    std::cout << dZeroes << std::endl;
  } else {
    std::cout << 1 + abs(dZeroes - dOnes) << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}