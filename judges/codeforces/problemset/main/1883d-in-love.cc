#include <bits/stdc++.h>

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;

using namespace std;

multiset<i32> ls, rs;
i32 sz = 0;

void Solve() {
  char sign;
  i32 l, r;
  cin >> sign >> l >> r;

  if (sign == '+') {
    sz++;
    ls.insert(l);
    rs.insert(r);
  } else {
    sz--;
    ls.erase(ls.find(l));
    rs.erase(rs.find(r));
  }

  if (sz > 0 && *ls.rbegin() > *rs.begin()) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  i32 q;
  cin >> q;
  while (q--) {
    Solve();
  }
}