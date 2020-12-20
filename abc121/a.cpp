#include <bits/stdc++.h>

int main() {
  int H, W, h, w;
  std::cin >> H >> W >> h >> w;
  int colored = h * W + w * H - h * w;
  std::cout << (H * W - colored) << std::endl;
  return 0;
}
