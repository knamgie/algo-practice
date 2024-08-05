#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 y, w;
  cin >> y >> w;
  
  i32 d = 6 - max(y, w) + 1;
  i32 divisor = gcd(d, 6);
  cout << d / divisor << '/' << 6 / divisor;
}

int main() {
  Solve();
}