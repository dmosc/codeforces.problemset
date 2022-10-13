#include <iostream>

std::string res = "";

void solve() {
  char val;
  bool isRed;
  std::string row;
  for (int i = 0; i < 8; ++i) {
    isRed = true;
    std::cin >> row;
    for (const char &val : row) {
      if (val != 'R') {
        isRed = false;
      }
    }
    if (isRed) {
      res += "R\n";
      return;
    }
  }
  res += "B\n";
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  std::cout << res << std::endl;
}