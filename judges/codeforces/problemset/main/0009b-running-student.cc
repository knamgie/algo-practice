#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, vb, vs;
  cin >> n >> vb >> vs;
  vector<i64> stops(n);
  for (i64& stop : stops) {
    cin >> stop;
  }
  i32 ux, uy;
  cin >> ux >> uy;

  i32 ans = 1;
  f32 t_min = (f32)INT_MAX;
  f32 su_min = (f32)INT_MAX;
  for (i32 i = 1; i < n; i++) {
    f32 tb = (f32)(stops[i] - stops[0]) / vb;
    f32 su = sqrt((ux - stops[i]) * (ux - stops[i]) + uy * uy);
    f32 ts = su / vs;
    f32 t = tb + ts;
    if (t <= t_min && su < su_min) {
      t_min = t;
      su_min = su;
      ans = i + 1;
    }
  }
  cout << ans;
}

int main() {
  Solve();
}