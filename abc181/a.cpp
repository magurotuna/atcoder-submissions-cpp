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

  if (N % 2 == 0) cout << "White" << endl;
  else cout << "Black" << endl;

  return 0;
}
