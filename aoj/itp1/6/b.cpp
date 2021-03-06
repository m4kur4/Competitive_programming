#include <bits/stdc++.h>

std::vector<std::string> _split(std::string target, std::string delimiter);

int main()
{
  // init
  int n;
  std::cin >> n;
  std::string types[] = {"S", "H", "C", "D"};
  std::string  numbers[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
  std::string card_value_all;
  std::string delimiter = "|";

  // create all card values
  for (std::string type: types) {
    for (std::string number: numbers) {
      card_value_all += type;
      card_value_all += number;
      card_value_all += delimiter;
    }
  }

  for (int i = 0; i < n; i++) {
    std::string card;
    std::string card_type;
    std::string card_number;
    std::cin >> card_type >> card_number;
    card += card_type;
    card += card_number;
    card += delimiter;
    card_value_all.replace(card_value_all.find(card), card.length(), "");
  }

  std::vector<std::string> remeined_cards = _split(card_value_all, delimiter);

  for (std::string card: remeined_cards) {
    std::cout << card << std::endl;
  }
  return 0;
}

// ========================================================================

std::vector<std::string> _split(std::string target, std::string delimiter) {
  
  std::vector<std::string> result;
  int delimiter_length = delimiter.length();

  if (delimiter_length == 0) {
    result.push_back(target);
  } else {
    std::string::size_type offset = std::string::size_type(0);
    while(true) {
      std::string::size_type position = target.find(delimiter, offset);
      if (position == std::string::npos) {
        // 最後の分割
        std::string item = target.substr(offset);
        if (item != "") {
          result.push_back(item);
        }
        break;
      }
      // 途中の分割
      std::string item = target.substr(offset, position - offset);
        if (item != "") {
          result.push_back(item);
        }
      offset = position + delimiter_length;
    }
  }
  return result;
}