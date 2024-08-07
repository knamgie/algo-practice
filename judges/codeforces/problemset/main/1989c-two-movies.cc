#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n), b(n);
  for (i32& ai : a) {
    cin >> ai;
  }
  for (i32& bi : b) {
    cin >> bi;
  }

  i32 a_sum = 0, b_sum = 0;
  i32 neg = 0, pos = 0;
  for (i32 i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      if (a[i] > b[i]) {
        a_sum += a[i];
      } else {
        b_sum += b[i];
      }
    } else if (a[i] == -1) {
      neg--;
    } else if (a[i] == 1) {
      pos++;
    }
  }

  i32 max_min = INT_MIN;
  for (i32 diff = neg; diff <= pos; diff++) {
    i32 a_total = a_sum + diff;
    i32 b_total = b_sum + neg + pos - diff;
    max_min = max(max_min, min(a_total, b_total));
  }
  cout << max_min << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}