#include <bits/stdc++.h>

static void makeRectangle(int h, int w)
{
  for (int i = 0; i < h; i++) {
    for (int k = 0; k < w; k++) {
      std::cout << '#';
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
