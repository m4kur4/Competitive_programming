#include <bits/stdc++.h>
using namespace std;

bool judge_student(int m, int f, int r);

int main()
{
  while(true) {
    int m, f, r;
    cin >> m >> f >> r;
    if (!judge_student(m, f, r)) {
      break;
    }
  }
  return 0;
}

bool judge_student(int m, int f, int r)
{
  if (m == -1 && f == -1 & r == -1) {
    // 処理終了
    return false;
  }
  char result = 'F';
  if (m == -1 || f == -1) {
    // 中間・期末のいずれかを欠席
    cout << result << endl;
    return true;
  }
  // 中間試験と期末試験の合計に応じて評価を出力
  int sum_m_f = m + f;
  if (sum_m_f < 30) {
    result = 'F';
  } else if (30 <= sum_m_f && sum_m_f < 50) {
    result = (r >= 50) ? 'C' : 'D';
  } else if (50 <= sum_m_f && sum_m_f < 65) {
    result = 'C';
  } else if (65 <= sum_m_f && sum_m_f < 80) {
    result = 'B';
  } else {
    result = 'A';
  }
  cout << result << endl;
  return true;
}