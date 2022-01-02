#include <utility>
#include <vector>

class UnionFind {
  using i64 = long long int;

private:
  std::vector<i64> parents;
  std::vector<i64> sizes;

public:
  UnionFind(i64 sz) {
    parents.resize(sz);
    for (i64 i = 0; i < sz; ++i) {
      parents[i] = i;
    }
    sizes.assign(sz, 1LL);
  };

  bool merge(i64 x, i64 y) {
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

  i64 root(i64 x) {
    while (parents[x] != x) {
      i64 grand_par = parents[parents[x]];
      parents[x] = grand_par;
      x = parents[x];
    }
    return x;
  };

  bool is_same(i64 x, i64 y) { return root(x) == root(y); };

  i64 size(i64 x) {
    i64 root = this->root(x);
    return sizes[root];
  };
};
