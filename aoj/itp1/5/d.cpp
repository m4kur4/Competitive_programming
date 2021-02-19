#include <bits/stdc++.h>
#include <algorithm>

int main()
{
  int n, temp;
  int max = -1000000;
  int min = 1000000;
  long sum = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {

    std::cin >> temp;

    min = std::min(temp, min);
    max = std::max(temp, max);
    sum += temp;
  }

  std::cout << min << " " << max << " " << sum << std::endl;

  return 0;
}
