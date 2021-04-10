#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
  std::string s;
  std::getline(std::cin, s);
  std::stringstream ss(s);
  std::vector<std::string> v;
  std::string buf;
  while (std::getline(ss, buf, ' ')) {
    v.push_back(buf);
  }

  std::sort(v.begin(), v.end());
  std::string ans = "";
  for (int i = 0; i < v.size(); i++) {
    ans += v[i];
    if (i != v.size() - 1) {
      ans += " ";
    }
  }

  std::cout << ans << std::endl;
  return 0;
}