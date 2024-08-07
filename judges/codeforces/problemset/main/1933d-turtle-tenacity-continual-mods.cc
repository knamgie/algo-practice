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
  for (i32& ai : a) { cin >> ai; }

  sort(a.begin(), a.end());
  if (a[0] != a[1]) {
    cout << "YES\n";
    return;
  }

  for (i32 ai : a) {
    if (ai % a[0] != 0) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}