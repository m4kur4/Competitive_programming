#include <bits/stdc++.h>

void draw(bool is_sharp)
{
  if (is_sharp) {
    std::cout << '#';
  } else {
    std::cout << '.';
  }
}

void makeRectangle(int h, int w)
{
  bool is_sharp = true;
  for (int i = 0; i < h; i++) {
    if (i % 2 == 0) {
      is_sharp = true;
    } else {
      is_sharp = false;
    }
    for (int k = 0; k < w; k++) {
      draw(is_sharp);
      is_sharp = !is_sharp;
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
