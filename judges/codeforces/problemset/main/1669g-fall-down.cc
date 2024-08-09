#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m;
  cin >> n >> m;
  vector<string> grid(n);
  for (auto& row : grid) cin >> row;

  vector<i32> land(m, n - 1);
  for (i32 i = n - 1; i >= 0; i--) {
    for (i32 j = 0; j < m; j++) {
      if (grid[i][j] == 'o') {
        land[j] = i - 1;
      } else if (grid[i][j] == '*') {
        grid[i][j] = '.';
        grid[land[j]][j] = '*';
        land[j]--;
      }
    }
  }

  for (auto& row : grid) {
    cout << row << '\n';
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}