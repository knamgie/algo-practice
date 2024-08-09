#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

using u64 = uint64_t;

void Solve() {
  u64 n;
  cin >> n;

  u64 checker = n;
  while (checker % 2 == 0) checker /= 2;
  if (checker == 1) {
    cout << 1 << '\n';
    cout << n << '\n';
    return;
  }

  i32 j = 0;
  u64 dummy = n;
  vector<i32> ones;
  while (dummy > 0) {
    if ((dummy & 1) == 1) ones.push_back(j);
    dummy >>= 1;
    j++;
  }

  vector<u64> rans(ones.size() + 1, n);
  for (i32 i = 0; i < ones.size(); i++) {
    rans[i + 1] = n ^ (1ULL << ones[i]);
  }

  cout << rans.size() << '\n';
  for (i32 i = rans.size() - 1; i >= 0; i--) {
    cout << rans[i] << ' ';
  }
  cout << '\n';
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}