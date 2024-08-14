#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, c;
  cin >> n >> c;
  vector<i32> a(n);
  for (i32& ai : a) cin >> ai;

  i32 i_max = 0;
  for (i32 i = 0; i < n; i++) {
    if (a[i] > a[i_max]) i_max = i;
  }

  vector<i64> prefs(n + 1, c);
  for (i32 i = 1; i < n + 1; i++) {
    prefs[i] = prefs[i - 1] + a[i - 1];
  }

  vector<i32> ans(n);
  for (i32 i = 0; i < n; i++) {
    if (i == i_max && prefs[1] < a[i_max]) {
      ans[i] = 0;
    } else if (prefs[i + 1] >= a[i_max]) {
      ans[i] = i;
    } else {
      ans[i] = i + 1;
    }
  }

  for (i32 elem : ans) {
    cout << elem << ' ';
  }
  cout << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}