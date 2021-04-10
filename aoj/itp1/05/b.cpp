#include <bits/stdc++.h>

static void makeRectangle(int h, int w)
{
  for (int i = 0; i < h; i++) {
    bool is_edge_i = (i == 0 || i == h-1);

    for (int k = 0; k < w; k++) {
      bool is_edge_k = (k == 0 || k == w-1);
      char item = '.';

      if (is_edge_i || is_edge_k) {
        item = '#';
      }

      std::cout << item;
    }
    std::cout << std::endl;
  }
}

int main()
{
  int H, W;
  while (std::cin >> H >> W) {

    if (H == 0 && W == 0) {
      break;
    }
    makeRectangle(H, W);
    std::cout << std::endl;
  }
  return 0;
}
