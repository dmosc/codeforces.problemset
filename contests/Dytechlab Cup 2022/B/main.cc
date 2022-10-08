#include <iostream>
#include <math.h>

void solve() {
  double l, r, c  = 0;
  std::cin >> l >> r;
  while (l <= r) {
    if (int(l) % int(floor(sqrt(l))) == 0.0) {
      ++c;
    }
    ++l;
  }
  std::cout << c << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}