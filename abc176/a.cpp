#include <bits/stdc++.h>

int main() {
  int n, x, t;
  std::cin >> n >> x >> t;
  int cnt = (n + x - 1) / x;
  std::cout << t * cnt << std::endl;
}
