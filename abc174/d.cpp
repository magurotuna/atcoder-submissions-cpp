#include <bits/stdc++.h>
using ll = long long int;

int main() {
  int n;
  std::cin >> n;
  std::vector<char> c(n);
  for (int i = 0; i < n; i++)
    std::cin >> c[i];
  int red_count = 0;
  for (int i = 0; i < c.size(); i++)
    if (c.at(i) == 'R')
      red_count++;

  int ans2 = 0;
  for (int i = 0; i < c.size(); i++) {
    if (i < red_count) {
      if (c.at(i) != 'R')
        ans2++;
    } else {
      if (c.at(i) != 'W')
        ans2++;
    }
  }
  std::cout << (ans2 / 2) << std::endl;
  return 0;
}
