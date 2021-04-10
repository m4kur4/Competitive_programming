#include <bits/stdc++.h>

int main()
{
  int a, b, ans;
  char op;
  bool is_end = false;
  while (std::cin >> a >> op >> b) {
    switch (op){
      case '+':
        ans = a + b;
        break;
      case '-':
        ans = a - b;
        break;
      case '*':
        ans = a * b;
        break;
      case '/':
        ans = floor(a / b);
        break;
      default:
        is_end = true;
        break;
    }
    if (is_end) {
      break;
    }
    std::cout << ans << std::endl;
  }
}
