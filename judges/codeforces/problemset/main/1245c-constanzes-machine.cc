#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

const i32 mod = 1e9 + 7;

void Solve() {
  string s;
  cin >> s;

  for (char c : s) {
    if (c == 'w' || c == 'm') {
      cout << 0;
      return;
    }
  }

  vector<i32> fib(s.size() + 1);
  fib[0] = 1;
  fib[1] = 1;
  for (i32 i = 2; i < fib.size(); i++) {
    fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
  }

  i64 ans = 1;
  for (i32 i = 0; i < s.size(); i++) {
    if (s[i] == 'u' || s[i] == 'n') {
      char c = s[i];
      i32 j = 0;
      while (s[i + j] == c) {
        j++;
      }
      ans = (ans * fib[j]) % mod;
      i += j - 1;
    }
  }
  cout << ans;
}

int main() {
  Solve();
}