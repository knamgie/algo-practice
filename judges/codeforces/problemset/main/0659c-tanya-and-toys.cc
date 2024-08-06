#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 n, m;
  cin >> n >> m;
  vector<i32> a(n);
  for (i32& ai : a) {
    cin >> ai;
  }

  vector<bool> used(1e9 + 1);
  for (i32 ai : a) {
    used[ai] = true;
  }

  i32 j = 1;
  i32 sum = 0;
  vector<i32> chosen;
  while (sum <= m) {
    if (!used[j]) {
      sum += j;
      chosen.push_back(j);
    }
    j++;
  }

  cout << chosen.size() - 1 << '\n';
  for (i32 i = 0; i < chosen.size() - 1; i++) {
    cout << chosen[i] << ' ';
  }
}

int main() {
  Solve();
}