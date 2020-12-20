#include <bits/stdc++.h>

int main() {
  int N;
  std::cin >> N;
  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;
  for (int i = 0; i < N; i++) {
    std::string s;
    std::cin >> s;
    if (s == "AC")
      ac++;
    else if (s == "WA")
      wa++;
    else if (s == "TLE")
      tle++;
    else if (s == "RE")
      re++;
  }
  std::cout << "AC x " << ac << std::endl;
  std::cout << "WA x " << wa << std::endl;
  std::cout << "TLE x " << tle << std::endl;
  std::cout << "RE x " << re << std::endl;
  return 0;
}
