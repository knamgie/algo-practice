#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& ai : a) {
    cin >> ai;
  }
  for (int i = 1; i < n - 1; i++) {
    a[i] -= 2 * a[i - 1];
    a[i + 1] -= a[i - 1];
    a[i - 1] -= a[i - 1];
    if (a[i] < 0) {
      cout << "NO\n";
      return;
    }
  }
  for (int ai : a) {
    if (ai != 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
}