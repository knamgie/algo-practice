#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i64 n;
  i32 m;
  cin >> n >> m;
  vector<i64> paids(m);
  for (i64& paid : paids) {
    cin >> paid;
  }

  n *= 100;
  for (i64& paid : paids) {
    paid *= 100;
  }

  i64 v = 0;
  i32 i = 0;
  while (i < paids.size() && v < n) {
    v += paids[i] / 3;
    i++;
  }

  if (v >= n) {
    cout << "Free after " << i << " times.";
  } else {
    cout << "Team.GOV!";
  }
}

int main() {
  Solve();
}