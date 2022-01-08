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

int main() {
  i64 N;
  cin >> N;

  vector<i64> ans;

  for (i64 i = 1; i * i <= N; ++i) {
    if (N % i == 0) {
      ans.push_back(i);
      if (N / i != i) ans.push_back(N / i);
    }
  }

  sort(ans.begin(), ans.end());
  for (const auto& x : ans) {
    cout << x << endl;
  }
  return 0;
}
