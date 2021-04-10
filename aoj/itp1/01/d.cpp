#include <iostream>
#include <cmath>

int main()
{
  int s;
  std::cin >> s;

  int hou = std::floor(s / 3600);
  int min = std::floor(s % 3600 / 60);
  int sec = std::floor(s % 60);

  std::cout << hou << ":" << min << ":" << sec << std::endl;
}