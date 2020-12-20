#include <bits/stdc++.h>

int main() {
  int H, W, K;
  std::cin >> H >> W >> K;
  std::vector<std::vector<char>> c(H, std::vector<char>(W));
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      std::cin >> c[i][j];
  auto print = [&](auto const &v) {
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++)
        std::cout << v[i][j] << ", ";
      std::cout << std::endl;
    }
  };

  // print(c);

  int ans = 0;

  // bit search
  for (int i = 0; i < (1 << H); i++) {
    for (int j = 0; j < (1 << W); j++) {
      int blacks = 0;
      for (int row = 0; row < H; row++) {
        for (int col = 0; col < W; col++) {
          bool white = c.at(row).at(col) == '.';
          bool red = ((1 << row) & i) || ((1 << col) & j);
          if (red || white)
            continue;
          blacks++;
        }
      }

      if (blacks == K)
        ans++;
    }
  }
  std::cout << ans << std::endl;
}
