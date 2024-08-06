#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 y, w;
  cin >> y >> w;

  i32 d = 6 - max(y, w) + 1;
  i32 div = gcd(d, 6);
  cout << d / div << '/' << 6 / div;
}

int main() {
  Solve();
}