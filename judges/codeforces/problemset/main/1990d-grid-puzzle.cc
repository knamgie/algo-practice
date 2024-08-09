#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n);
  for (i32& ai : a) cin >> ai;

  // Uhm...
  i32 ans = 0, status = -1;
  for (i32 i = 0; i < n; i++) {
    if (a[i] > 4) {
      ans++;
      status = -1;
    } else if (a[i] == 0) {
      status = -1;
    } else {
      if (status == 1) {
        status = 0;
        ans++;
      } else if (status == 0) {
        if (a[i] <= 2) {
          status = -1;
        } else {
          status = 1;
          ans++;
        }
      } else {
        if (a[i] <= 2) status = 0;
        ans++; 
      }
    }
  }
  cout << ans << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}