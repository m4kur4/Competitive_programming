#include <iostream>
#include <string>

int main()
{
  int a, b;
  std::cin >> a >> b;

  std::string sym = "==";
  if (a < b) {
    sym = '<';
  } else if (a > b) {
    sym = '>';
  }

  std::cout << "a " << sym << " b" << std::endl;
  return 0;
}