#include <bits/stdc++.h>
using ll = long long int;

int main() {
  int n;
  std::cin >> n;
  std::vector<int> ls(n);
  for (int i = 0; i < n; i++)
    std::cin >> ls[i];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (ls.at(i) == ls.at(j) || ls.at(i) == ls.at(k) ||
            ls.at(j) == ls.at(k))
          continue;
        std::vector<int> l;
        l.push_back(ls.at(i));
        l.push_back(ls.at(j));
        l.push_back(ls.at(k));
        std::sort(l.begin(), l.end());
        if (l.at(0) + l.at(1) > l.at(2)) {
          ans++;
        }
      }
    }
  }

  std::cout << ans << std::endl;
  return 0;
}
