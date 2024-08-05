#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 a, b;
  cin >> a >> b;

  if (gcd(a, b) == 1) {
    cout << "finite\n";
  } else {
    cout << "infinite\n";
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}