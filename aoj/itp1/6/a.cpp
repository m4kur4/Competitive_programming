#include <bits/stdc++.h>

int main()
{
  int n;
  std::stack<int> stk;
  
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int item;
    std::cin >> item;
    stk.push(item);
  }

  for (int i = 0; i < n; i++) {
    std::cout << stk.top();
    stk.pop();

    if (stk.empty()) {
      std::cout << std::endl;

    } else {
      std::cout << " ";
    }
  }
}
