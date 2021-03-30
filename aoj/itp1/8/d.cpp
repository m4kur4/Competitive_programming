#include <bits/stdc++.h>
using namespace std;

bool is_contains(string ring, string parts);

int main()
{
  string s, p;
  cin >> s >> p;

  string ans = "No";
  if (is_contains(s, p)) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}

bool is_contains(string ring, string parts)
{
  // 二個繋げれば循環後のマッチングが検証できる
  string ring_double = ring + ring;
  bool is_find = ring_double.find(parts) != string::npos;
  if (is_find) {
    return true;
  }
  return false;
}
