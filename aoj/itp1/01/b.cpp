#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  int i;
  std::cin >> i;
  // デフォルトだと指数表記になる
  // 小数表記を修正する
  std::cout << std::fixed << std::setprecision(0) << std::pow(i, 3) << std::endl;
}