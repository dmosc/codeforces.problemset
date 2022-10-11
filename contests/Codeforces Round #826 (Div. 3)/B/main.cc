#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  if (n == 3) {
    std::cout << -1 << std::endl;
    return;
  }
  std::vector<int> perm;
  int part = n % 2 == 0 ? (n / 2) : (n / 2) + 1;
  for (int i = n; i > part; --i) {
    perm.push_back(i);
  }
  for (int i = 1; i <= part; ++i) {
    perm.push_back(i);
  }
  for (const auto& v : perm) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}