#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
  int n, i = 0;
  std::cin >> n;
  std::vector<int> a(n), agg = {0};
  while (i < n) {
    std::cin >> a[i++];
    agg.push_back(agg[i - 1] + a[i - 1]);
  }
  int minThick = INT_MAX;
  for (int i = 1; i < agg.size(); ++i) {
    int longestSeq = i, lastMultJ = i, mult = 2;
    for (int j = i + 1; j < agg.size(); ++j) {
      if (agg[j] == agg[i] * mult) {
        longestSeq = std::max(longestSeq, j - lastMultJ);
        lastMultJ = j;
        mult++;
      }
    }
    if (lastMultJ == agg.size() - 1) {
      minThick = std::min(minThick, longestSeq);
    }
  }
  if (minThick == INT_MAX) {
    std::cout << n << std::endl;
  } else {
    std::cout << minThick << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}