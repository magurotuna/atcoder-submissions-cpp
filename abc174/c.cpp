#include <bits/stdc++.h>
using ll = long long int;

int main() {
  ll k;
  std::cin >> k;
  int cur = 0;
  for (int i = 1; i <= k; i++) {
    cur = (cur * 10 + 7) % k;
    if (cur == 0) {
      std::cout << i << std::endl;
      return 0;
    }
  }
  std::cout << (-1) << std::endl;
}
