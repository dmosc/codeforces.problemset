/*
  https://codeforces.com/problemset/problem/1739/B
*/
#include <iostream>
#include <vector>

/*
  d_i = | a_i - a_i1 |

  Two solutions:
  d_i = ( a_i - a_i1 )
  d_i = -( a_i - a_i1 )

  Solve for a_i:
  a_i = d_i + a_i1
  a_i = a_i1 - d_i
*/

void solve() {
  int n, i = 0;
  std::cin >> n;
  std::vector<int> d(n), a(n);
  while (i < n) {
    std::cin >> d[i++];
  }
  a[0] = d[0];
  int a_i0, a_i1;
  for (i = 1; i < n; ++i) {
    a_i0 = d[i] + a[i - 1];
    a_i1 = a[i - 1] - d[i];
    if (a_i0 == a_i1 || (a_i0 < 0 && a_i1 >= 0) || (a_i1 < 0 && a_i0 >= 0)) {
      a[i] = a_i0;
    } else {
      std::cout << -1 << std::endl;
      return;
    }
  }
  for (const auto& a_i : a) {
    std::cout << a_i << " ";
  }
  std::cout << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}