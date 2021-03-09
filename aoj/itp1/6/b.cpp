#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, map<string, bool> > card_combinations;
  string types[4] = {"S", "H", "C", "D"};
  for (string type: types) {
    map<string, bool> numbers;
    for (int i = 1; i <= 13; i++) {
      numbers.emplace(to_string(i), false);
    }
      card_combinations.emplace(type, numbers);
  }

  for (int i = 0; i < n; i++) {
    string type, number;
    cin >> type >> number;
    card_combinations.at(type).at(number) = true;
  }

  for (string type: types) {
    for (int i = 1; i <= 13; i++) {
      bool has_card = card_combinations.at(type).at(to_string(i));
      if (!has_card) {
        cout << type << " " << i << endl;
      }
    }
  }
}