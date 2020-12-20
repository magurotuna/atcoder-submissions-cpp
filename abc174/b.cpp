#include <bits/stdc++.h>
using ll = long long int;

int main() {
  ll n, d;
  std::cin >> n >> d;
  ll d2 = d * d;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll x, y;
    std::cin >> x >> y;
    auto dist2 = x * x + y * y;
    if (dist2 <= d2)
      ans++;
  }
  std::cout << ans << std::endl;
}
