#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int n;
  cin >> n;
  string t;
  cin >> t;
  string ans;
  for (int i = n - 1; i >= 0; i--) {
    if (t[i] == '0') {
      ans += (t[i - 2] - '0') * 10 + t[i - 1] - '0' + 'a' - 1;
      i -= 2; 
    } else {
      ans += t[i] - '0' + 'a' - 1;
    }
  }
  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i];
  }
  cout << '\n';
}

int main() {
  int q;
  cin >> q;
  while (q--) {
    Solve();
  }
}