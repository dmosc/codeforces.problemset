#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

void solve() {
  int n, i = 0;
  std::string word;

  std::cin >> n;
  std::vector<int> nums(n);
  while (i < n) {
    std::cin >> nums[i++];
  }
  std::cin >> word;

  std::unordered_map<int, char> idx_char;
  for (i = 0; i < n; ++i) {
    if (idx_char[nums[i]] && idx_char[nums[i]] != word[i]) {
      std::cout << "NO" << std::endl;
      return;
    }
    idx_char[nums[i]] = word[i];
  }
  std::cout << "YES" << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}