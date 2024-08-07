#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, k;
  cin >> n >> k;

  i32 ans = 0;
  bool flag = false;
  while (k > 0) {
    ans++;
    k -= n;
    flag = !flag;
    if (flag) { n--; }
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