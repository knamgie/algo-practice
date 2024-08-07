#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i64 p, a, b, c;
  cin >> p >> a >> b >> c;

  i64 a_left = (a - p % a) % a;
  i64 b_left = (b - p % b) % b;
  i64 c_left = (c - p % c) % c;
  cout << min(a_left, min(b_left, c_left)) << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}