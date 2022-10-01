/*
  https://codeforces.com/problemset/problem/1702/D
*/

#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  int nWords, targetPrice, price;
  std::cin >> nWords;
  std::string word;
  std::unordered_map<char, int> cFreqs;
  std::vector<std::string> res;
  while (nWords--) {
    std::cin >> word >> targetPrice;
    cFreqs.clear();
    price = 0;
    for (const auto& c : word) {
      price += c - 96;
      cFreqs[c]++;
    }
    for (int i = 'z'; i >= 'a'; --i) {
      while (cFreqs[i] && price > targetPrice) {
        price -= i - 96;
        cFreqs[i]--;
      }
    }
    if (price <= targetPrice) {
      std::string sWord = "";
      for (const auto& c : word) {
        if (cFreqs[c]) {
          sWord += c;
          cFreqs[c]--;
        }
      }
      res.push_back(sWord);
    }
  }
  for (const auto& word : res) {
    std::cout << word << std::endl;
  }
}