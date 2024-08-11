#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

using namespace std;

void MergeWithInvs(i64& invs, vector<i32>& a, i32 l, i32 m, i32 r) {
  vector<i32> la(m + 1 - l), ra(r - m);
  for (i32 i = l; i <= m; i++) la[i - l] = a[i];
  for (i32 i = m + 1; i <= r; i++) ra[i - m - 1] = a[i];

  i32 ila = 0, ira = 0;
  while (ila < la.size() || ira < ra.size()) {
    if (ila == la.size() || ira < ra.size() && la[ila] > ra[ira]) {
      invs += la.size() - ila;
      a[l + ila + ira - 1] = ra[ira++];
    } else {
      a[l + ila - 1 + ira] = la[ila++];
    }
  }
}

void SortWithInvs(i64& invs, vector<i32>& a, i32 l, i32 r) {
  if (l < r) {
    SortWithInvs(invs, a, l, (l + r) / 2);
    SortWithInvs(invs, a, (l + r) / 2 + 1, r);
    MergeWithInvs(invs, a, l, (l + r) / 2, r);
  }
}

void Solve() {
  i32 n;
  cin >> n;
  vector<i32> a(n), b(n);
  for (i32& ai : a) cin >> ai;
  for (i32& bi : b) cin >> bi;

  unordered_map<i32, i32> a_map, b_map;
  for (i32 i = 0; i < n; i++) {
    a_map[a[i]]++;
    b_map[b[i]]++;
  }
  if (a_map != b_map) {
    cout << "NO\n";
    return;
  }

  i64 a_invs = 0, b_invs = 0;
  SortWithInvs(a_invs, a, 0, a.size() - 1);
  SortWithInvs(b_invs, b, 0, b.size() - 1);

  if (a_invs % 2 == b_invs % 2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  i32 t;
  cin >> t;
  while (t--) {
    Solve();
  }
}