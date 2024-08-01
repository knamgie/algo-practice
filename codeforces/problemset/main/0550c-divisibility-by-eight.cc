#include <bits/stdc++.h>

using namespace std;

void Solve() {
  string n;
  cin >> n;
  int sz = n.size();
  for (int i = 0; i < sz; i++) {
    if ((n[i] - '0') % 8 == 0) {
      cout << "YES" << '\n';
      cout << n[i];
      return;
    }
  }
  for (int i = 0; i < sz - 1; i++) {
    for (int j = i + 1; j < sz; j++) {
      int sub = (n[i] - '0') * 10 + (n[j] - '0');
      if (sub % 8 == 0) {
        cout << "YES" << '\n';
        cout << sub;
        return;
      }
    }
  }
  for (int i = 0; i < sz - 2; i++) {
    for (int j = i + 1; j < sz - 1; j++) {
      for (int k = j + 1; k < sz; k++) {
        int sub = (n[i] - '0') * 100 + (n[j] - '0') * 10 + (n[k] - '0');
        if (sub % 8 == 0) {
          cout << "YES" << '\n';
          cout << sub;
          return;
        }
      }
    }
  }
  cout << "NO";
}

int main() {
  Solve();
}