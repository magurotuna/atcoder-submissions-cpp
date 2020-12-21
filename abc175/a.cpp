#include <bits/stdc++.h>
using ll = long long int;

int main() {
  std::string s;
  std::cin >> s;
  int ans = 0;
  if (s.find("R") != std::string::npos)
    ans = 1;
  if (s.find("RR") != std::string::npos)
    ans = 2;
  if (s.find("RRR") != std::string::npos)
    ans = 3;
  std::cout << ans << std::endl;
  return 0;
}
