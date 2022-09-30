/*
  https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
#include <vector>

int main() {
  int n, k, i = 0;
  std::cin >> n >> k;
  std::vector<int> scores(n);
  while (i < n) {
    std::cin >> scores[i++];
  }
  i = 0;
  while (i < n && scores[i] && scores[i] >= scores[k - 1]) ++i;
  std::cout << i << std::endl;
}