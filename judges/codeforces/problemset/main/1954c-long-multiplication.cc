#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  string x, y;
  cin >> x >> y;

  bool flag = true;
  for (i32 i = 0; i < x.size(); i++) {
    if (x[i] != y[i] && flag) {
      i32 xi = x[i];
      i32 yi = y[i];
      x[i] = max(xi, yi);
      y[i] = min(xi, yi);
      flag = false;
    } else if (!flag) {
      if (x[i] > y[i]) swap(x[i], y[i]);
    }
  }
  cout << x << '\n';
  cout << y << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}