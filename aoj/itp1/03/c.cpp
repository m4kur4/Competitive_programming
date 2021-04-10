#include <bits/stdc++.h>

int main()
{
  int x, y;
  while(std::cin >> x >> y) {
    if (x == 0 && y == 0) {
      break;
    }
    if (y < x) {
      std::swap(x, y);
    }
    std::cout << x << " " << y << std::endl;
  }
  return 0;
}
