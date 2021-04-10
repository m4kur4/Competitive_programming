#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main()
{
  ll N;
  cin >> N;

  unordered_set<ll> s;
  for (ll a = 2; a * a <= N; a++) {
    ll x = a * a;
    while (x <= N) {
      s.insert(x);
      x *= a;
    }
  }
  cout << N - s.size() << endl;
}
