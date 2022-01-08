#include <algorithm>
#include <iostream>
#include <map>
#include <stdint.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

const i64 mod = 1e9 + 7;
const i64 border = 1e9 + 5;

int main() {
  i64 X, Y, A, B;
  cin >> X >> Y >> A >> B;

  i64 ans = 0;

  while (true) {
    if (X > border) {
      // atcoder is more beneficial in this case
      // to prevent overflow
      ans += (Y-1-X) / B;
      break;
    }

    i64 kakomon_inc = (A - 1) * X;
    i64 atcoder_inc = B;
    if (kakomon_inc < atcoder_inc) {
      if (A * X >= Y) break;
      X *= A;
      ans++;
      continue;
    } else {
      ans += (Y-1-X) / B;
      break;
    }
  }

cout << ans << endl;
  return 0;
}
