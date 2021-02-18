#include <bits/stdc++.h>

int main()
{
  int cnt = 1;
  int i;
  while(std::cin >> i) {
    if (i == 0) {
      break;
    }
    std::cout << "Case " << cnt << ": " << i << std::endl;
    cnt++;
  }
  return 0;
}