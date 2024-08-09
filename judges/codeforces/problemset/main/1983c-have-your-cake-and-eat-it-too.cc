#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n;
  cin >> n;
  vector<vector<i32>> abc(3, vector<i32>(n));
  for (auto& pers : abc) {
    for (i32& val : pers) {
      cin >> val;
    }
  }

  i64 tot = 0;
  for (i32 val : abc[0]) {
    tot += val;
  }

  vector<vector<i64>> prefs(3, vector<i64>(n + 1));
  for (i32 i = 1; i < n + 1; i++) {
    prefs[0][i] = prefs[0][i - 1] + abc[0][i - 1];
    prefs[1][i] = prefs[1][i - 1] + abc[1][i - 1];
    prefs[2][i] = prefs[2][i - 1] + abc[2][i - 1];
  }

  for (i32 i1 = 0; i1 < 3; i1++) {
    i32 j1 = 1;
    while (prefs[i1][j1] < (tot + 2) / 3) {
      j1++;
    }

    for (i32 k = 1; k <= 2; k++) {
      i32 i2 = (i1 + k) % 3;
      i32 j2 = j1 + 1;
      while (j2 < n && prefs[i2][j2] - prefs[i2][j1] < (tot + 2) / 3) {
        j2++;
      }
      if (j2 > n || prefs[i2][j2] - prefs[i2][j1] < (tot + 2) / 3) {
        break;
      }

      i32 i3 = ((k == 1) ? i1 + 2 : i1 + 1) % 3;
      if (prefs[i3][n] - prefs[i3][j2] >= (tot + 2) / 3) {
        vector<pair<i32, i32>> bounds(3);
        bounds[i1] = {1, j1};
        bounds[i2] = {j1 + 1, j2};
        bounds[i3] = {j2 + 1, n};

        for (auto& b : bounds) {
          cout << b.first << ' ';
          cout << b.second << ' ';
        }
        cout << '\n';
        return;
      }
    }
  }
  cout << -1 << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}