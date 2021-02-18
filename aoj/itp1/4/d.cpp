#include <bits/stdc++.h>

int main()
{
  int a, b, c;
  std::cin >> a >> b >> c;

  int ans = 0;
  for (int i = a; i <= b; i++) {
    if (c % i == 0) {
      ans++;
    }
  }
  std::cout << ans << std::endl;

  return 0;
}
