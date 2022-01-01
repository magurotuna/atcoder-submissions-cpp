#include <utility>
#include <vector>

class UnionFind {
  using ll = long long int;

private:
  std::vector<long long int> parents;
  std::vector<long long int> sizes;

public:
  UnionFind(ll sz) {
    parents.resize(sz);
    for (ll i = 0; i < sz; ++i) {
      parents[i] = i;
    }
    sizes.assign(sz, 1LL);
  };

  bool merge(ll x, ll y) {
    x = root(x);
    y = root(y);
    if (x == y)
      return false;
    if (sizes[x] < sizes[y])
      std::swap(x, y);
    sizes[x] += sizes[y];
    parents[y] = x;
    return true;
  };

  ll root(ll x) {
    while (parents[x] != x) {
      ll grand_par = parents[parents[x]];
      parents[x] = grand_par;
      x = parents[x];
    }
    return x;
  };

  bool is_same(ll x, ll y) { return root(x) == root(y); };

  ll size(ll x) {
    ll root = this->root(x);
    return sizes[root];
  };
};
