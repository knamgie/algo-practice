#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int y, w;
  cin >> y >> w;
  int d = 6 - max(y, w) + 1;
  int temp = gcd(d, 6);
  cout << d / temp << '/' << 6 / temp;
}

int main() {
  Solve();
}