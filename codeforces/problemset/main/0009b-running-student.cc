#include <bits/stdc++.h>

using namespace std;

void Solve() {
  int n, vb, vs;
  cin >> n >> vb >> vs;
  vector<int64_t> stops(n);
  for (int64_t& stop : stops) {
    cin >> stop;
  }
  int ux, uy;
  cin >> ux >> uy;
  int ans = 1;
  float t_min = (float)INT_MAX;
  float su_min = (float)INT_MAX;
  for (int i = 1; i < n; i++) {
    float tb = (float)(stops[i] - stops[0]) / vb;
    float su = sqrt((ux - stops[i]) * (ux - stops[i]) + uy * uy);
    float ts = su / vs;
    float t = tb + ts;
    if (t <= t_min && su < su_min) {
      t_min = t;
      su_min = su;
      ans = i;
    }
  }
  cout << ans + 1;
}

int main() {
  Solve();
}