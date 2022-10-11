#include <iostream>

int getTShirtSize(std::string tShirt) {
  if (tShirt == "M") {
    return 0;
  }
  int xCount = 0;
  for (const auto& c : tShirt) {
    if (c == 'X') {
      ++xCount;
    }
  }
  return tShirt[tShirt.size() - 1] == 'L' ? (xCount + 1) : (-xCount - 1);
}

void solve() {
  std::string tA, tB;
  std::cin >> tA >> tB;
  int tASize = getTShirtSize(tA), tBSize = getTShirtSize(tB);
  if (tASize > tBSize) {
    std::cout << ">" << std::endl;
  } else if (tASize < tBSize) {
    std::cout << "<" << std::endl;
  } else {
    std::cout << "=" << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}