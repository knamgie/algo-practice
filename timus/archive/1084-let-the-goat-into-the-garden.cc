#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

const f64 pi = 3.1415926;

void Solve() {
  f64 side, r;
  cin >> side >> r;

  f64 area;
  if (r <= side / 2) {
    area = pi * r * r;
  } else if (r >= side / sqrt(2)) {
    area = side * side;
  } else {
    f64 side_part = 2 * sqrt(r * r - (side / 2) * (side / 2));
    f64 theta = 2 * asin((side / 2) / r) - pi / 2;
    f64 square_area_part = 4 * side_part * side / (2 * 2);
    f64 circle_area_part = 4 * (theta / 2) * r * r;
    area = square_area_part + circle_area_part;
  }
  cout << fixed << setprecision(3) << area;
}

int main() {
  Solve();
}