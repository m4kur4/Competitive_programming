#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc_sum_every_digit(string x);
int ctoi(char c);

int main()
{
  while (true) {
    string x;
    cin >> x;
    if (x == "0") {
      break;
    }
    cout << calc_sum_every_digit(x) << endl;
  }
  return 0;
}

/**
 * @fn
 * 指定した数の各桁の合計値を計算する
 * 
 * @param s 対象の数(文字列)
 * @return 対象の数の各桁を合計した値
 */
ll calc_sum_every_digit(string s)
{
  ll ans = 0;
  for (char c: s) {
    ans += ctoi(c);
  }
  return ans;
}

/**
 * @fn
 * 指定した文字を数値へ変換して返却する
 * 
 * @param c 対象の文字
 * @return 対象の文字を数値へ変換した値
 */
int ctoi(char c)
{
  map<char, int> convert_map{
    {'0', 0},
    {'1', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9}
  };
  return convert_map.at(c);
}