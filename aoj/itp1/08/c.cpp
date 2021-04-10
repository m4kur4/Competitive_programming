#include <bits/stdc++.h>
using namespace std;

bool ends_with(string target, string suffix);
void add_alphabet_counts(map<char, int>& alphabet_counts, string target);
void output_alphabet_counts(map<char, int> alphabet_counts);

int main()
{
  map<char, int> alphabet_counts{
    {'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, 
    {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, 
    {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, 
    {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, 
    {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, 
    {'z', 0}
  };

  string s;
  // NOTE: EOF まで読み込む場合は以下のような while 文(コンソールだと動かない)
  while (cin >> s) {
    add_alphabet_counts(alphabet_counts, s);
  }
  output_alphabet_counts(alphabet_counts);
  return 0;
}

/**
 * @fn
 * 指定した文字列が指定した文字列で終了しているかどうかを判定する
 * 
 * @param s 判定対象文字列
 * @param suffix 判定用文字列
 */
bool ends_with(string target, string suffix)
{
  if (target.size() < suffix.size()) {
    return false;
  }

  if (target.compare(target.size() - suffix.size(), suffix.size(), suffix) == 0) {
    return true;
  }
  return false;
}

/**
 * @fn
 * 指定したアルファベットのカウント用連想配列へ
 * 指定した文字列に含まれているアルファベット数を反映する
 * 大文字・小文字は区別しない
 * 
 * @param alphabet_counts アルファベットのカウント用連想配列
 * @param target 対象文字列
 */
void add_alphabet_counts(map<char, int>& alphabet_counts, string target)
{
  for (char c: target) {
    char c_low = tolower(c);

    bool is_alphabet = alphabet_counts.find(c_low) != alphabet_counts.end();
    if (!is_alphabet) {
      // アルファベット以外の文字はカウントしない
      continue;
    }
    alphabet_counts[c_low] += 1;
  }
}

/**
 * @fn
 * 指定したアルファベットのカウント用連想配列を標準出力する
 * 
 * @param alphabet_counts アルファベットのカウント用連想配列
 */
void output_alphabet_counts(map<char, int> alphabet_counts)
{
  for (auto pair:alphabet_counts) {
    cout << pair.first << " : " << pair.second << endl;
  }
}
