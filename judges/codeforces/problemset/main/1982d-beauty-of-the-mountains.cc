#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m, k;
  cin >> n >> m >> k;
  vector<vector<i32>> heights(n, vector<i32>(m));
  for (auto& row : heights) {
    for (i32& h : row) cin >> h;
  }
  vector<string> types(n);
  for (auto& t : types) cin >> t;

  vector<vector<i32>> prefs(n + 1, vector<i32>(m + 1, 0));
  for (i32 i = 1; i < n + 1; i++) {
    for (i32 j = 1; j < m + 1; j++) {
      i32 common = prefs[i - 1][j] + prefs[i][j - 1] - prefs[i - 1][j - 1];
      i32 type = (types[i - 1][j - 1] == '1') ? 1 : -1;
      prefs[i][j] = common + type;
    }
  }

  i64 tot_diff = 0;
  for (i32 i = 0; i < n; i++) {
    for (i32 j = 0; j < m; j++) {
      i32 type = (types[i][j] == '1') ? 1 : -1;
      tot_diff += type * heights[i][j];
    }
  }

  if (tot_diff == 0) {
    cout << "YES\n";
    return;
  }

  vector<i32> diffs;
  for (i32 i = k; i <= n; i++) {
    for (i32 j = k; j <= m; j++) {
      i32 to_delete = prefs[i - k][j] + prefs[i][j - k];
      i32 to_add = prefs[i - k][j - k];
      i32 diff = prefs[i][j] - to_delete + to_add;
      diffs.push_back(abs(diff));
    }
  }

  i32 tot_gcd = diffs.front();
  for (i32 d : diffs) tot_gcd = gcd(tot_gcd, d);

  if (tot_gcd != 0 && tot_diff % tot_gcd == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}