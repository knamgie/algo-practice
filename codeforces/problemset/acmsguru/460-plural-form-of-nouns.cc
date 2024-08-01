#include <bits/stdc++.h>

using namespace std;

void Solve() {
  string noun;
  cin >> noun;
  int sz = noun.size();
  if (noun[sz - 1] == 'x' || noun[sz - 1] == 's' || noun[sz - 1] == 'o' ||
      (noun[sz - 2] == 'c' && noun[sz - 1] == 'h')) {
    noun += "es";
  } else if (noun[sz - 1] == 'f') {
    noun[sz - 1] = 'v';
    noun += "es";
  } else if (noun[sz - 2] == 'f' && noun[sz - 1] == 'e') {
    noun[sz - 2] = 'v';
    noun += 's';
  } else if (noun[sz - 1] == 'y') {
    noun[sz - 1] = 'i';
    noun += "es";
  } else {
    noun += 's';
  }
  cout << noun << '\n';
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    Solve();
  }
}