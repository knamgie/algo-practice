#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, l, r;
  cin >> n >> l >> r;
  vector<i32> a(n);
  for (i32& ai : a) cin >> ai;

  queue<i32> q;
  i32 ans = 0, sum = 0;
  for (i32 ai : a) {
    sum += ai;
    q.push(ai);
    while (!q.empty() && sum > r) {
      sum -= q.front();
      q.pop();
    }
    
    if (l <= sum && sum <= r) {
      ans++;
      sum = 0;
      q = {};
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