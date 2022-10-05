/*
  https://codeforces.com/problemset/problem/1729/C
*/

#include <iostream>
#include <vector>
#include <queue>

int getCost(char fromLetter, char toLetter) {
  return abs(fromLetter - toLetter);
}

void solve() {
  std::string word;
  std::cin >> word;
  std::priority_queue<std::pair<char, int>, std::vector<std::pair<char, int>>, std::greater<std::pair<char, int>>> pq;
  for (int i = 0; i < word.size(); ++i) {
    pq.push({ word[i], i });
  }
  int minCost = 0;
  std::vector<std::pair<char, int>> indexes;
  while(!pq.empty()) {
    if (pq.top().first == word[0] || pq.top().first == word[word.size() - 1]) {
      indexes.push_back(pq.top());
    };
    pq.pop();
  }
  std::cout << minCost << " " << indexes.size() << std::endl;
  for (const auto& index : indexes) {
    std::cout << index.second + 1 << " ";
  }
  std::cout << std::endl;
}

int main() {
  int tests;
  std::cin >> tests;
  while (tests--) {
    solve();
  }
}

