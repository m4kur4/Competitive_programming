#include <bits/stdc++.h>
using namespace std;

// おそくてだめだ。。
int main()
{
  int N;
  cin >> N;

  int ans = 0;
  for (int n = 1; n <= N; n++) {
    string n_str = to_string(n);
    int n_size = n_str.size();
    if (n_size % 2 != 0) {
      n = n * 10 - 1;
      continue;
    }
    int n_size_half = n_size / 2;
    string n_fore = n_str.substr(0, n_size_half);
    string n_back = n_str.substr(n_size_half);

    if (n_fore == n_back) {
      ans++;
    }
  }

  cout << ans << endl;
}
