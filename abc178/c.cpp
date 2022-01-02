#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n % 2 != 0)
      res = res * a % mod;
    a = a * a % mod;
    n /= 2;
  }
  return res;
}

const ll mod = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  ll ans = modpow(10, N, mod) - (2 * modpow(9, N, mod)) + modpow(8, N, mod);
  ans %= mod;
  ans = (ans + mod) % mod;
  cout << ans << endl;
}
