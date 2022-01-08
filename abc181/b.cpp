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
  i64 ans = 0;
  for (int i = 0; i < N; ++i) {
    i64 a, b;
    cin >> a >> b;
    ans += (b * (b + 1) - a * (a - 1)) / 2;
  }
  cout << ans << endl;
  return 0;
}
