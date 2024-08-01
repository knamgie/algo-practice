#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int n;
  cin >> n;
  int maximum = 0;
  int64_t sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    if (ai > maximum) {
      sum += maximum;
      maximum = ai;
    } else {
      sum += ai;
    }
    if (sum == maximum) {
      ans++;
    }
  }
  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
}