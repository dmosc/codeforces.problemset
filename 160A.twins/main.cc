/*
  https://codeforces.com/problemset/problem/160/A
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, c, i, sum = 0, cSum = 0;
  std::cin >> n;
  std::vector<int> coins;
  while (n--) {
    std::cin >> c;
    sum += c;
    coins.push_back(c);
  }
  std::sort(coins.begin(), coins.end());
  for (i = coins.size() - 1; i >= 0; i--) {
    cSum += coins[i];
    if (cSum > (sum / 2)) break;
  }
  std::cout << coins.size() - i << std::endl;
}