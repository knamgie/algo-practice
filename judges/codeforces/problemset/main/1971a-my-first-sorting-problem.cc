#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 x, y;
  cin >> x >> y;
  cout << min(x, y) << ' ';
  cout << max(x, y) << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}