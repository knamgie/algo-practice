#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  string t;
  cin >> t;

  string s, ss;
  i32 j = 0;
  while (s.size() + ss.size() < t.size()) {
    s += t[j];
    if (t[j] != 'a') ss += t[j];
    j++;
  }

  if (ss == t.erase(0, j)) {
    cout << s;
  } else {
    cout << ":(";
  }
}

int main() { Solve(); }