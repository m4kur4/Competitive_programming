#include <bits/stdc++.h>
using namespace std;

string tolower_string(string& target);

int main()
{
  string W, T;
  cin >> W;
  unordered_map<string, int> dict_count{{W, 0}};

  while (cin >> T) {
    if (T == "END_OF_TEXT") {
      break;
    }
    // 既に辞書へ追加されている場合はカウントアップ、それ以外の場合は初期化
    string T_lower = tolower_string(T);
    bool is_exist = dict_count.find(T) != dict_count.end();
    if (is_exist) {
      dict_count[T_lower] += 1;
    } else {
      dict_count[T_lower] = 0;
    }
  }

  int ans = dict_count.at(W);
  cout << ans << endl;
}

/**
 * @fn
 * 指定した文字列を全て小文字に変換する
 * 
 * @param target 対象文字列
 * @return 変換後の文字列
 */
string tolower_string(string& target)
{
  for (int i = 0; i < target.size(); i++) {
    target[i] = tolower(target.at(i));
  }
  return target;
}
