#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  vector<int> A, B, temp;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int item_a, item_b;
    cin >> item_a >> item_b;
    A.push_back(item_a);
    B.push_back(item_b);
  }

  for (int a = 0; a < A.size(); a++) {
    for (int b = 0; b < B.size(); b++){
      if (a == b) {
        temp.push_back(A[a] + B[b]);
      } else {
        temp.push_back(max(A[a], B[b]));
      }
    }
  }
  int ans = *min_element(temp.begin(), temp.end());
  cout << ans << endl;
}

