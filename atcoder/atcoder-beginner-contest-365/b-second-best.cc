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

  i32 i1 = 0;
  for (i32 i = 0; i < n; i++) {
    if (a[i] > a[i1]) {
      i1 = i;
    }
  }

  i32 i2 = (i1 == 0) ? 1 : 0;
  for (i32 i = 0; i < n; i++) {
    if (a[i2] < a[i] && a[i] < a[i1]) {
      i2 = i;
    }
  }
  cout << i2 + 1;
}

int main() {
  Solve();
}