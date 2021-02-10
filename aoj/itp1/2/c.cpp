#include <iostream>

int main()
{
  int a, b;
  std::cin >> a >> b;
  
  int area = (a * b);
  int perimeter = (a + b) * 2;

  std::cout << area;
  std::cout << " ";
  std::cout << perimeter << std::endl;
}