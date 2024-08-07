#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void Solve() {
  i32 y;
  cin >> y;

  i32 days = 365;
  if (y % 4 == 0) {
    if (y % 100 != 0 || y % 400 == 0) {
      days++;
    }
  }
  cout << days;
}

int main() { Solve(); }