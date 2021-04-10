#include <bits/stdc++.h>
using namespace std;

int main()
{
  long N;
  vector<int> A;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  long ans = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = 1; j < N; j++) {
      if (i == j) {
        continue;
      }
      int hoge = A.at(i);
      int foo = A.at(j);
      int bar = hoge - foo;
      long val = bar * bar;
      ans += val;
    }
  }
  cout << ans << endl;
  return 0;
}
