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
  int n, a, b;
  cin >> n >> a >> b;
  cout << (n - a + b) << endl;

  return 0;
}
