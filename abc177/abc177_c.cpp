#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

const ll mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (auto &x : a) {
    cin >> x;
  }
  vector<ll> cumsum(n + 1);
  cumsum[0] = 0;
  for (int i = 1; i <= n; ++i) {
    cumsum[i] = cumsum[i - 1] + a[i - 1];
  }

  ll ans = 0;

  for (int i = 0; i < n - 1; ++i) {
    ans += (a[i] % mod) * ((cumsum[n] - cumsum[i + 1]) % mod);
    ans %= mod;
  }

  cout << ans << endl;
}
