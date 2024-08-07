#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

i64 FindSum(vector<i32>& a, i32 limit) {
  i64 sum = 0;
  for (i32 ai : a) {
    sum += min(ai, limit);
  }
  return sum;
}

void Solve() {
  i32 n;
  i64 m;
  cin >> n >> m;
  vector<i32> a(n);
  for (i32& ai : a) {
    cin >> ai;
  }

  i32 mx = 0;
  for (i32 ai : a) {
    mx = max(mx, ai);
  }
  if (FindSum(a, mx) <= m) {
    cout << "infinite";
    return;
  }

  i32 low = 0;
  i32 high = mx;
  while (high - low > 1) {
    i32 mid = (low + high) / 2;
    if (FindSum(a, mid) <= m) {
      low = mid;
    } else {
      high = mid;
    }
  }
  cout << low;
}

int main() { Solve(); }