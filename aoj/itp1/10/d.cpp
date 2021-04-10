#include <bits/stdc++.h>
using namespace std;

double get_distance(vector<double> x, vector<double> y, char p);
double get_distance_manhattan(vector<double> x, vector<double> y);
double get_distance_euclid(vector<double> x, vector<double> y, int p);
double get_distance_chebyshev(vector<double> x, vector<double> y);
int ctoi(char c);

int main()
{
  // NOTE: 立方根はcbrt
  // https://cpprefjp.github.io/reference/cmath/cbrt.html

  int n;
  cin >> n;
  vector<double> x(n, 0);
  vector<double> y(n, 0);

  double temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    x[i] += temp;
  }
  for (int i = 0; i < n; i++) {
    cin >> temp;
    y[i] += temp;
  }
  cout << fixed << setprecision(6);
  cout << get_distance(x, y, '1') << endl;
  cout << get_distance(x, y, '2') << endl;
  cout << get_distance(x, y, '3') << endl;
  cout << get_distance(x, y, 'X') << endl;  // ∞ がマルチバイト警告でるので X と表現

  return 0;
}

/**
 * @fn
 * 指定したベクトル同士についてミンコフスキー距離を求める。
 * 次元の値に応じて処理を変更する。
 * @param x ベクトル
 * @param y ベクトル
 * @param p 次元
 * @return 距離
 */
double get_distance(vector<double> x, vector<double> y, char p)
{
  double result;
  switch (p) {
    case '1':
      result = get_distance_manhattan(x, y);
      break;

    case '2':
    case '3':
      result = get_distance_euclid(x, y, ctoi(p));
      break;

    case 'X':
      result = get_distance_chebyshev(x, y);
      break;
  }
  return result;
}

/**
 * マンハッタン距離を求める
 * @param x ベクトル
 * @param y ベクトル
 * @return 距離
 */
double get_distance_manhattan(vector<double> x, vector<double> y)
{
  double result = 0;
  int size = x.size();

  for (int i = 0; i < size; i++) {
    result += abs(x.at(i) - y.at(i));
  }
  return result;
}

/**
 * ユークリッド距離を求める
 * @param x ベクトル
 * @param y ベクトル
 * @param p 次元
 * @return 距離
 */
double get_distance_euclid(vector<double> x, vector<double> y, int p)
{
  double result = 0;
  int size = x.size();
  for (int i = 0; i < size; i++) {
    result += pow(abs(x.at(i) - y.at(i)), p);
  }

  if (p == 2) {
    result = sqrt(result);

  } else if (p == 3) {
    result = cbrt(result);

  } else {
    // ねんのため
    return -1;
  }
  return result;
}

/**
 * チェビシェフ距離を求める
 * @param x ベクトル
 * @param y ベクトル
 * @return 距離
 */
double get_distance_chebyshev(vector<double> x, vector<double> y)
{
  int size = x.size();
  vector<double> diffs(size, 0);
  for (int i = 0; i < size; i++) {
    diffs.push_back(abs(x.at(i) - y.at(i)));
  }
  double result = *max_element(diffs.begin(), diffs.end());
  return result;
}

/**
 * @fn
 * 指定した文字を整数型へ変換する。
 * @param c 変換対象の文字
 * @return 変換後の整数
 */
int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}
