#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vector<i32> ind(m);
  for (i32& i : ind) cin >> i;
  string c;
  cin >> c;

  sort(ind.begin(), ind.end());
  sort(c.begin(), c.end());

  i32 ic = 0;
  for (i32 i = 0; i < m; i++) {
    s[ind[i] - 1] = c[ic++];

    i32 j = i;
    while (j < m && ind[i] == ind[j]) j++;
    i = j - 1;
  }
  cout << s << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}