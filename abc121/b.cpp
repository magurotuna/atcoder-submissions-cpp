#include <bits/stdc++.h>

int main() {
  int N, M, C;
  std::cin >> N >> M >> C;
  std::vector<int> bs(M);
  std::vector<std::vector<int>> as(N, std::vector<int>(M));
  for (int i = 0; i < M; i++)
    std::cin >> bs[i];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::cin >> as[i][j];
    }
  }
  int passed = 0;
  for (int i = 0; i < N; i++) {
    int score = C;
    for (int j = 0; j < M; j++) {
      score += as[i][j] * bs[j];
    }
    if (score > 0) {
      passed++;
    }
  }
  std::cout << passed << std::endl;
  return 0;
}
