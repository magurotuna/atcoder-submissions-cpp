#include <bits/stdc++.h>

using ll = long long int;

int main() {
  int N;
  std::cin >> N;
  std::vector<ll> a(N);
  for (int i = 0; i < N; i++)
    std::cin >> a[i];
  std::sort(a.begin(), a.end());

  std::size_t sz = a.size();
  ll comfortableness = a.at(sz - 1);

  std::priority_queue<ll> pq;
  pq.push(a.at(sz - 2));
  pq.push(a.at(sz - 2));

  for (int i = N - 3; i >= 0; i--) {
    ll top = pq.top();
    pq.pop();
    comfortableness += top;
    pq.push(a.at(i));
    pq.push(a.at(i));
  }

  std::cout << comfortableness << '\n';
  return 0;
}
