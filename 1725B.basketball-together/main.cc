/*
  https://codeforces.com/problemset/problem/1725/B
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, d;
  std::cin >> n >> d;
  std::vector<int> powers(n);
  while (n--) {
    std::cin >> powers[n];
  }

  std::sort(powers.begin(), powers.end());
  int wins = 0, i = 0, j = powers.size() - 1, sum;
  while (i <= j) {
    sum = powers[j];
    while (i < j && sum <= d) {
      sum += powers[j];
      ++i;
    }
    --j;
    if (sum > d) ++wins;
  }
  std::cout << wins << std::endl;
}