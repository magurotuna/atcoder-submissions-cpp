#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

class UnionFind {
  using ll = long long int;

private:
  std::vector<long long int> parents;
  std::vector<long long int> sizes;

public:
  UnionFind(ll sz);
  bool merge(ll x, ll y);
  ll root(ll x);
  bool is_same(ll x, ll y);
  ll size(ll x);
};

UnionFind::UnionFind(ll sz) {
  parents.resize(sz);
  for (ll i = 0; i < sz; ++i) {
    parents[i] = i;
  }
  sizes.assign(sz, 1LL);
}

bool UnionFind::merge(ll x, ll y) {
  x = root(x);
  y = root(y);
  if (x == y)
    return false;
  if (sizes[x] < sizes[y])
    std::swap(x, y);
  sizes[x] += sizes[y];
  parents[y] = x;
  return true;
}

ll UnionFind::root(ll x) {
  while (parents[x] != x) {
    ll grand_par = parents[parents[x]];
    parents[x] = grand_par;
    x = parents[x];
  }
  return x;
}

bool UnionFind::is_same(ll x, ll y) { return root(x) == root(y); }

ll UnionFind::size(ll x) {
  ll root = this->root(x);
  return sizes[root];
}

int main() {
  int N, M;
  cin >> N >> M;
  auto u = UnionFind{N};
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    u.merge(a, b);
  }

  int ans = 0;
  for (int i = 0; i < N; ++i) {
    ll s = u.size(i);
    if (ans < s)
      ans = s;
  }
  cout << ans << endl;
}
