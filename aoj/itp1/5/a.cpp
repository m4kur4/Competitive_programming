#include <bits/stdc++.h>

int main()
{
  int a, b, d, r;
  double f;
  std::cin >> a >> b;

  d = floor(a / b);
  r = a % b;
  f = (double)a / b;

  std::cout << d << " " << r << " " << std::fixed << std::setprecision(5) << f << std::endl;

  return 0;
}
