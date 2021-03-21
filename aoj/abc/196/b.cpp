#include <bits/stdc++.h>
using namespace std;

int main()
{
  string ans;
  string x;
  cin >> x;

  int dot_position = x.find('.');
  if (dot_position == string::npos) {
    ans = x;
  } else {
    ans = x.erase(dot_position);
  }
  cout << ans << endl;
}
