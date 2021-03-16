#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix(n, vector<int>(m, 0));

  for (int i_n = 0; i_n < n; i_n++) {
    for (int i_m = 0; i_m < m; i_m++) {
      int temp;
      cin >> temp;
      matrix[i_n][i_m] += temp;
    }
  }

  vector<int> b;
  for (int i_m = 0; i_m < m; i_m++) {
    int temp;
    cin >> temp;
    b.push_back(temp);
  }

  for (int i_n = 0; i_n < n; i_n++) {
    int ans = 0;
    for (int i_m = 0; i_m < m; i_m++) {
      ans += (matrix[i_n][i_m] * b[i_m]);
    }
    cout << ans << endl;
  }

  return 0;
}