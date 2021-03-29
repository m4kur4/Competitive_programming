#include <bits/stdc++.h>
using namespace std;

bool is_number(string str);
void shuffle(string& card, int index);

int main()
{
  while (true) {
    string card;
    cin >> card;
    if (card == "-") {
      break;
    }
    int shuffle_count;
    cin >> shuffle_count;
    for (int i = 0; i < shuffle_count; i++) {
      int index;
      cin >> index;
      shuffle(card, index);
    }
    cout << card << endl;
  }
}

bool is_number(string str)
{
  bool result = true;
  for (char c: str) {
    if (!isdigit(c)) {
      result = false;
      break;
    }
  }
  return result;
}

void shuffle(string& card, int index)
{
  string first_half = card.substr(0, index);
  string latter_half = card.substr(index);
  string shuffled = latter_half + first_half;
  card = shuffled;
}