#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

const i64 mod = 1e9 + 7;

template <typename T> class PrimeFactor {
private:
  std::vector<T> smallest_prime_factors;

public:
  PrimeFactor(T n) {
    assert(n >= 2);

    smallest_prime_factors.resize(n + 1);

    for (T i = 0; i <= n; ++i) {
      smallest_prime_factors[i] = i;
    }

    for (T i = 2; i * i <= n; ++i) {
      if (smallest_prime_factors[i] == i) {
        for (T j = i * i; j <= n; j += i) {
          if (smallest_prime_factors[j] == j) {
            smallest_prime_factors[j] = i;
          }
        }
      }
    }
  }

  std::map<T, int> get_primes(T n) {
    assert(static_cast<T>(smallest_prime_factors.size()) >= n + 1);

    std::map<T, int> m;
    while (n != 1) {
      auto spf = smallest_prime_factors[n];
      m[spf]++;
      n /= spf;
    }
    return m;
  }
};

int main() {
  int N;
  cin >> N;

  auto f = PrimeFactor<int>(1e6 + 10);
  int ans = 0;

  for (int c = 1; c < N; ++c) {
    int d = N - c;
    auto primes = f.get_primes(d);
    int cnt = 1;
    for (const auto &[key, value] : primes) {
      cnt *= value + 1;
    }
    ans += cnt;
  }

  cout << ans << '\n';
  return 0;
}
