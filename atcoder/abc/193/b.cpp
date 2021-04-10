#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int A[N], P[N], X[N];
  int ans = 1000000000;

  for (int i = 0; i < N; i++) {
    cin >> A[i] >> P[i] >> X[i];

    // 買えない
    bool is_saled_out = X[i] <= A[i];
    if (is_saled_out) {
      continue;
    }

    // 買える場合は最小値更新
    ans = min(ans, P[i]);
  }

  // 最小値が更新されていない場合は一台も買えない
  if (ans == 1000000000) {
    ans = -1;
  }
  cout << ans << endl;
}

