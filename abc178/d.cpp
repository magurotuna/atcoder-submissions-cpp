#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

const ll mod = 1e9 + 7;

int main() {
  int S;
  cin >> S;
  if (S <= 2) {
    cout << 0 << endl;
    return 0;
  }

  vector<ll> a(S + 1, 0);
  a[0] = 1;
  ll x = 0;
  for (int i = 3; i <= S; ++i) {
    x += a[i - 3];
    x %= mod;
    a[i] = x;
    a[i] %= mod;
  }
  cout << a[S] << endl;

  return 0;
}
