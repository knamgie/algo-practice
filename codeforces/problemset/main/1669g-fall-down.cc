#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m;
  cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m));
  for (auto& row : grid) {
    for (char& c : row) {
      cin >> c;
    }
  }

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
    for (char c : row) {
      cout << c;
    }
    cout << '\n';
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}