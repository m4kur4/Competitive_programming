#include <bits/stdc++.h>
using namespace std;

// 図にして考えるの 重要。。。
int main()
{
  int R, X, Y;
  cin >> R >> X >> Y;
  double euclid_dist = sqrt(pow(X, 2) + pow(Y, 2));

  int ans = 0;
  if (euclid_dist < R) {
    ans = 2;
  } else {
    ans = ceil(euclid_dist / R);
  }
  cout << ans << endl;
}
