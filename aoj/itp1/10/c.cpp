#include <bits/stdc++.h>
using namespace std;

double get_average(vector<double> numbers);
double get_variance(vector<double> numbers);

int main()
{
  while (true) {
    double count_student;
    cin >> count_student;
    if (count_student == 0) {
      break;
    }

    vector<double> points(count_student, 0);
    for (int i = 0; i < count_student; i++) {
      double temp;
      cin >> temp;
      points[i] += temp;
    }
    // 分散と標準偏差を求める
    double variance = get_variance(points);
    double std_deviation = sqrt(variance);
    cout << fixed << setprecision(8) << std_deviation << endl;
  }
  return 0;
}

/**
 * @fn
 * 指定した数字配列に含まれる数の相加平均を求める
 * @param numbers 数字配列
 * @return 相加平均
 */
double get_average(vector<double> numbers)
{
  double sum = accumulate(numbers.begin(), numbers.end(), 0);
  double result = sum / numbers.size();
  return result;
}

/**
 * @fn
 * 指定した数字配列に含まれる数の分散を求める
 * @param numners 数字配列
 * @return 分散
 */
double get_variance(vector<double> numbers)
{
  double average = get_average(numbers);
  int size = numbers.size();
  double temp = 0;
  for (int i = 0; i < size; i++) {
    temp += pow((numbers[i] - average), 2);
  }
  double result = temp / size;
  return result;
}
