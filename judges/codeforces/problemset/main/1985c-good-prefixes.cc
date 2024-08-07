#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n);
  for (i32& ai : a) { cin >> ai; }

  i32 mx = 0;
  i64 sum = 0;
  i32 ans = 0;
  for (i32 ai : a) {
    if (ai > mx) {
      sum += mx;
      mx = ai;
    } else { sum += ai; }
    if (sum == mx) { ans++; }
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