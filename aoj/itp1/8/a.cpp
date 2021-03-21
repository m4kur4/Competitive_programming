#include <bits/stdc++.h>
using namespace std;

string convert_mutual_low_up(string s);

int main()
{
  string line;
  getline(cin, line);
  cout << convert_mutual_low_up(line) << endl;
  return 0;
}

/**
 * @fn
 * 指定した文字列に対して大文字・小文字を相互変換した
 * 新たな文字列を返却する
 * 
 * @param s 対象文字列
 * @return 変換後の文字列
 */
string convert_mutual_low_up(string s)
{
  string result = "";
  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    if (isupper(c)) {
      result += tolower(c);
    } else {
      result += toupper(c);
    }
  }
  return result;
}
