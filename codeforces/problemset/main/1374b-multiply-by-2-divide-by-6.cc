#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int n;
  cin >> n;
  int ans = 0;
  while (n % 6 == 0) {
    n /= 6;
    ans++;
  }
  while (n % 3 == 0) {
    n /= 3;
    ans += 2;
  }
  if (n != 1) {
    cout << -1 << '\n';
  } else {
    cout << ans << '\n';
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
}