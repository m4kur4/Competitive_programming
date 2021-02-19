#include <bits/stdc++.h>

int main()
{
  double r;
  std::cin >> r;
  double area = (r * r) * M_PI;
  double circumference = 2 * r * M_PI;
  std::cout << std::fixed << std::setprecision(5) << area << " " << circumference << std::endl;

  return 0;
}
