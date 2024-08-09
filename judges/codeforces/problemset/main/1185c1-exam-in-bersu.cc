#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m;
  cin >> n >> m;
  vector<i32> t(n);
  for (i32& ti : t) cin >> ti;

  vector<i32> ans(n);
  i32 sum = t.front();
  for (i32 i = 1; i < n; i++) {
    sort(t.begin(), t.begin() + i);
    i32 j = i - 1;
    i32 curr = sum;
    while (curr + t[i] > m) {
      curr -= t[j];
      j--;
      ans[i]++;
    }
    sum += t[i];
  }

  for (i32 elem : ans) {
    cout << elem << ' ';
  }
}

int main() { Solve(); }