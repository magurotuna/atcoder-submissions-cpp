#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

const i64 mod = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  int d1, d2;

  int succ = 0;

  // i = 0
  cin >> d1 >> d2;
  if (d1 == d2)
    ++succ;
  // i = 1
  cin >> d1 >> d2;
  if (d1 == d2)
    ++succ;

  bool ok = false;
  for (int i = 2; i < N; ++i) {
    cin >> d1 >> d2;
    if (d1 == d2)
      ++succ;
    else
      succ = 0;

    if (succ == 3) {
      ok = true;
    }
  }

  if (ok)
    cout << "Yes" << endl;

  else
    cout << "No" << endl;
  return 0;
}
