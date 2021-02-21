#include <bits/stdc++.h>

int include3(int i, int n, int x)
{
  if (x % 10 == 3) {
    std::cout << " " << i;
    return i + 1;
  } else {
    x /= 10;
    if (x == 0) {
      return i + 1;
    } else {
      return include3(i, n, x);
    }
  }
}

int checkNum(int i, int n, int x)
{
  x = i;
  if (x % 3 == 0) {
    std::cout << " " << i;
    return i + 1;
  } else {
    return include3(i, n, x);
  }
}

int main()
{
  int i = 1;
  int n, x;
  std::cin >> n;
  while (true) {
    x = i;
    i = checkNum(i, n, x);
    if (n < i) {
      std::cout << std::endl;
      break;
    }
  }

  return 0;
}
