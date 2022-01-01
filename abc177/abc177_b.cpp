#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s, t;
  std::cin >> s >> t;

  int s_len = s.size();
  int t_len = t.size();

  int ans = 1 << 30;

  for (int i = 0; i < s_len - t_len + 1; ++i) {
    int cnt = 0;
    for (int j = 0; j < t_len; ++j) {
      if (s[i + j] != t[j])
        cnt++;
    }
    ans = std::min(ans, cnt);
  }

  std::cout << ans << std::endl;
}
