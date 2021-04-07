#include <bits/stdc++.h>
using namespace std;

double degree_to_radian(double degree);

int main()
{
  // 弧度法はラジアン、sin関数の引数も らじあん。。Math.PIで割る
  // S = a * b sinθ * 2/1
  double a, b, c;
  cin >> a >> b >> c;
  c = degree_to_radian(c);

  double H = (b * sin(c));
  double S = a * H / 2;
  
  // 余弦定理
  double another_side = sqrt(pow(a, 2) + pow(b, 2) - (2 * a * b * cos(c)));
  double L = a + b + another_side;

  cout << std::fixed << std::setprecision(8) << S << endl;
  cout << std::fixed << std::setprecision(8) << L << endl;
  cout << std::fixed << std::setprecision(8) << H << endl;

  return 0;
}

/**
 * @fn
 * 角度をラジアンへ変換する
 * @param degree 角度
 * @return ラジアン変換後の値
 */
double degree_to_radian(double degree)
{
  return (degree * M_PI / 180);
}