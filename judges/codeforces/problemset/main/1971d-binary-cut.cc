#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  string s;
  cin >> s;

  i32 ans = 1;
  bool flag = true;
  for (i32 i = 1; i < s.size(); i++) {
    if (s[i - 1] != s[i]) {
      if (s[i] == '1' && flag) {
        flag = false;
      } else {
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