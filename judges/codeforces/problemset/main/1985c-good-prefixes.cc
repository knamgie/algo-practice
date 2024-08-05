#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n);
  for (i32& ai : a) {
    cin >> ai;
  }

  i32 max = 0;
  i64 sum = 0;
  i32 ans = 0;
  for (i32 ai : a) {
    if (ai > max) {
      sum += max;
      max = ai;
    } else {
      sum += ai;
    }
    if (sum == max) {
      ans++;
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