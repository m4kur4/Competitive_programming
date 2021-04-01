#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int ans_taro = 0;
  int ans_hana = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    string card_taro, card_hana;
    cin >> card_taro >> card_hana;
    // NOTE: 後ろに来る文字列の方が大きい
    if (card_taro > card_hana) {
      ans_taro += 3;
    } else if (card_taro < card_hana) {
      ans_hana += 3;
    } else {
      ans_taro++;
      ans_hana++;
    }
  }
  cout << ans_taro << ' ' << ans_hana << endl;
  return 0;
}
