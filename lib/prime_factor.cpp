#include <cassert>
#include <map>
#include <vector>

// In the preprosess, it calculates smallest prime factors for all integers from
// 2 to n.
// Then you can query by any integer between 2 and n, returning a map
// that contains prime factors of the number you have provided.
//
// preprocess: O(n loglog n)
// query: O(log n)
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
