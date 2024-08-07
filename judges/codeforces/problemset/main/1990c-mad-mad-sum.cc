#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

i64 FindAdditive(vector<i32>& a) {
  i64 addit = 0;
  for (i32 ai : a) {
    addit += ai;
  }

  i32 mx = 0;
  unordered_set<i32> taken;
  for (i32& ai : a) {
    if (taken.contains(ai) && ai > mx) {
      mx = ai;
    }
    taken.insert(ai);
    ai = mx;
  }

  return addit;
}

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n);
  for (i32& ai : a) {
    cin >> ai;
  }

  i64 sum = 0;
  sum += FindAdditive(a);
  sum += FindAdditive(a);

  for (i32 i = 0; i < n; i++) {
    sum += (i64)(n - i) * a[i];
  }
  cout << sum << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}