#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

const i64 mod = 1e9 + 7;

int main() {
  string s;
  cin >> s;
  if (s.back() == 's') {
    s += "es";
  } else {
    s += 's';
  }
  cout << s << endl;

  return 0;
}
