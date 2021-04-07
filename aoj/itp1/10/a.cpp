#include <bits/stdc++.h>
using namespace std;

int main()
{
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double dist_x = abs(x1 - x2);
  double dist_y = abs(y1 - y2);

  double ans = sqrt(pow(dist_x, 2) + pow(dist_y, 2));
  cout << fixed << setprecision(8) << ans << endl; 

  return 0;
}
