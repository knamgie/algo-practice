#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  string s;
  cin >> s;

  bool flag = true;
  for (char& c : s) {
    if (c != s[0] && flag) {
      swap(s[0], c);
      flag = false;
    }
  }

  if (flag) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    cout << s << '\n';
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}