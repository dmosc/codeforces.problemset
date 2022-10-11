#include <iostream>
#include <vector>

void merge(std::vector<int> &p, int &moves, int l, int m, int r) {
  if (p[l] > p[r]) {
    moves++;
    int leftPSize = m - l + 1, rightPSize = r - m;
    std::vector<int> leftP(leftPSize);
    std::vector<int> rightP(rightPSize);
    for (int i = 0; i < leftPSize; ++i) {
      leftP[i] = p[l + i];
    }
    for (int i = 0; i < rightPSize; ++i) {
      rightP[i] = p[m + i + 1];
    }
    rightP.insert(rightP.end(), leftP.begin(), leftP.end());
    printf("PRINTING rightP\n");
    for (const auto& v : rightP) {
      std::cout << v << " ";
    }
  std::cout << std::endl;
    p = rightP;
  }
}

void mergeSort(std::vector<int> &p, int &moves, int l, int r) {
  if (l >= r) {
    return;
  }
  int m = l + (r - l) / 2;
  std::cout << "M: " << m << std::endl;
  mergeSort(p, moves, l, m);
  mergeSort(p, moves, m + 1, r);
  merge(p, moves, l, m, r);
}

int mergeSortMoves(std::vector<int> p) {
  int moves = 0, l = 0, r = p.size() - 1;
  mergeSort(p, moves, l, r);
  for (const auto& v : p) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
  return moves;
}

void solve() {
  int m, i = 0;
  std::cin >> m;
  if (m < 2) {
    std::cout << 0 << std::endl;
    return;
  }
  std::vector<int> p(m);
  while (i < m) {
    std::cin >> p[i] >> p[i + 1];
    if (abs(p[i] - p[i + 1]) > 1) {
      std::cout << -1 << std::endl;
      return;
    }
    i += 2;
  }
  std::cout << mergeSortMoves(p) << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}