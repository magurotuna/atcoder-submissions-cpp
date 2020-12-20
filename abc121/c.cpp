#include <bits/stdc++.h>

using ll = long long;

int main() {
  ll N, M;
  std::cin >> N >> M;
  std::vector<std::pair<ll, ll>> AB;
  for (int i = 0; i < N; i++) {
    ll a, b;
    std::cin >> a >> b;
    AB.push_back(std::make_pair(a, b));
  }
  std::sort(AB.begin(), AB.end(),
            [](auto const &a, auto const &b) { return a.first < b.first; });
  ll ans = 0;
  ll count = 0;
  for (int i = 0; i < N; i++) {
    ll cur_price = AB[i].first;
    ll cur_count = AB[i].second;
    if (count + cur_count > M) {
      ll need = M - count;
      ans += need * cur_price;
      break;
    }
    ans += cur_price * cur_count;
    count += cur_count;
  }
  std::cout << ans << std::endl;
  return 0;
}
