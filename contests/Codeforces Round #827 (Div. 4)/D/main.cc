#include <iostream>
#include <algorithm>
#include <vector>

int gcd(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;
  int minVal = std::min(a, b);
  int maxVal = std::max(a, b);
  return gcd(minVal, maxVal % minVal);
}

void solve() {
  int n, i = 0;
  std::cin >> n;
  std::vector<int> a(n);
  while (i < n) {
    std::cin >> a[i++];
  }
  int maxIdxSum = INT_MIN;
  for (i = a.size() - 1; i >= 0; i--) {
    if (a[i] % 2 == 0 && a[j] % 2 == 0) continue;
    for (int j = i; j >= 0; j--) {
      if (gcd(a[i], a[j]) == 1) {
        maxIdxSum = std::max(maxIdxSum, i + j);
        break;
      }
    }
  }
  std::cout << (maxIdxSum != INT_MIN ? maxIdxSum + 2 : -1) << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}