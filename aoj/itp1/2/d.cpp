#include <iostream>

using namespace std;

int main()
{
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  
  bool isOverLeft = r < x;
  bool isOverRight = (W - x) < r;
  bool isOverDown = y < r;
  bool isOverUp = (H - y) < r;

  cout << isOverLeft;
  cout << isOverRight;
  cout << isOverDown;
  cout << isOverUp;

  string ans = "Yes";
  if (isOverLeft || isOverRight || isOverDown || isOverUp) {
    ans = "No";
  }

  cout << ans << endl;

  return 0;
}