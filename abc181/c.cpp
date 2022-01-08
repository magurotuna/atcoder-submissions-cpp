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
  int N; cin >> N;
  vector<pair<int, int>> xy(N);
  for (auto &[x, y] : xy) {
    cin >> x >> y;
  }

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      for (int k = j + 1; k < N; ++k) {
        auto [x1, y1] = xy[i];
        auto [x2, y2] = xy[j];
        auto [x3, y3] = xy[k];

        x1 -= x3;
        x2 -= x3;
        y1 -= y3;
        y2 -= y3;

        if (x2 * y1 == x1 * y2) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
