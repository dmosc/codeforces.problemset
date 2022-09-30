/*
  https://codeforces.com/problemset/problem/231/A
*/

#include <iostream>

int main() {
  int problems, knows, nKnows = 0, nProblems = 0;
  std::cin >> problems;
  while (problems--) {
    nKnows = 0;
    for (int i = 0; i < 3; ++i) {
      std::cin >> knows;
      nKnows += knows;
    }
    if (nKnows > 1) {
      nProblems++;
    }
  }
  std::cout << nProblems << std::endl;
}