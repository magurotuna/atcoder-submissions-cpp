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
  string s;
  cin >> s;

  if (s.size() == 1) {
    if (s == "8") cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
  }

  if (s.size() == 2) {
    int num1 = stoi(s);
    int num2 = stoi(string{s[1], s[0]});
    if (num1 % 8 == 0 || num2 % 8 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
  }

  vector<int> cnt(10);
  for (const char c: s) {
    int num = c - '0';
    cnt[num]++;
  }

  for (int i = 112; i < 1000; i += 8) {
    int j = i;
    int d1 = j % 10;
    j /= 10;
    int d2 = j % 10;
    j /= 10;
    int d3 = j;

    auto copied = cnt;
    copied[d1]--;
    copied[d2]--;
    copied[d3]--;

    bool ok = true;
    for (const auto x : copied) {
      if (x < 0) {
        ok = false;
      }
    }

    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }

  }

  cout << "No" << endl;

  return 0;
}
