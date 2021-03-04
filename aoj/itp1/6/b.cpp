#include <bits/stdc++.h>

int main()
{
  // init
  int n;
  std::cin >> n;
  std::string types[] = {"S", "H", "C", "D"};
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  std::string card_values[];
  std::ostringstream ss;

  for (std::string type: types) {
    for (int number: numbers) {
      ss << type << " " << number;
      card_values += ss.str();
      ss.str("");
      ss.clear(std::ostringstream::goodbit);
    }
  }

  // input

  std::vector<std::string> cards;
  for(int i = 0; i < n; i++) {
    char type;
    int number;
    std::cin >> type >> number;
    ss << type << number;
    cards.push_back(ss.str());
    ss.str("");
    ss.clear(std::ostringstream::goodbit);
  }

  // output
  for (std::string card: cards) {
    if (card_values.find(card) == std::string::npos) {
      continue;
    }
    std::cout << card << std::endl;
  }

}
