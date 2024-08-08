#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

f64 Log(f64 base, f64 arg) { return log(arg) / log(base); }

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n);
  for (i32& ai : a) {
    cin >> ai;
  }

  i32 j = 1;
  while (j < n && a[j] >= a[j - 1]) {
    j++;
  }
  for (i32 i = j; i < n; i++) {
    if (a[i] == 1) {
      cout << -1 << '\n';
      return;
    }
  }

  i64 prev = 0, ans = 0;
  for (i32 i = 1; i < n; i++) {
    if ((f64)prev > Log(2, Log(a[i - 1], a[i]))) {
      prev += ceil(Log(2, Log(a[i], a[i - 1])));
      ans += prev;
    } else {
      prev = 0;
    }
  }
  cout << ans << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}