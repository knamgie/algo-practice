#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i64 n, k;
  cin >> n >> k;

  if (k % 2 == 1) {
    cout << "NO\n";
    return;
  }

  i64 max_sum = 0;
  for (i32 i = 0; i < n; i++) {
    max_sum += abs((1 + i) - (n - i));
  }

  if (max_sum < k) {
    cout << "NO\n";
    return;
  }

  vector<i32> perm(n + 1);
  for (i32 i = 1; i <= n; i++) perm[i] = i;

  k /= 2;
  i32 j = 0;
  while (k - abs((1 + j) - (n - j)) > 0) {
    k -= abs((1 + j) - (n - j));
    swap(perm[1 + j], perm[n - j]);
    j++;
  }

  swap(perm[1 + j], perm[1 + j + k]);

  cout << "YES\n";
  for (i32 i = 1; i <= n; i++) {
    cout << perm[i] << ' ';
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