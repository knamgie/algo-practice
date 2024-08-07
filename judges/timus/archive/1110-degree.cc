#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m, y;
  cin >> n >> m >> y;

  vector<i32> xs;
  for (i32 x = 0; x < m; x++) {
    i32 xn = 1;
    for (i32 i = 0; i < n; i++) {
      xn = (xn * x) % m;
    }
    if (xn == y) { xs.push_back(x); }
  }

  if (xs.empty()) { cout << -1; }
  else {
    for (i32 x : xs) {
      cout << x << ' ';
    }
  }
}

int main() {
  Solve();
}