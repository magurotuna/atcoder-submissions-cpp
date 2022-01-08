#include <algorithm>
#include <iostream>
#include <map>
#include <stdint.h>
#include <string>
#include <tuple>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

const i64 mod = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  vector<i64> xs(N);
  for (auto &x : xs) cin >> x;

  i64 m = 0;
  i64 e2 = 0;
  i64 c = 0;

  for (const auto& x: xs) {
    auto a = abs(x);
    m += a;
    e2 += a * a;
    c = max(c, a);
  }

  cout << m << endl;
  cout << fixed << setprecision(15) << sqrt(double(e2)) << endl;
  cout << c << endl;

  return 0;
}
