#include <bits/stdc++.h>
using namespace std;

vector<int> spread(int num);
int get_comb_count(vector<int> vec, int sum);

int main()
{
  while(true) {
    int n, x;
    cin >> n >> x;
    if (n == 0 && x == 0) {
      break;
    }

    vector<int> vec = spread(n);
    int count = get_comb_count(vec, x);
    cout << count << endl;
  } 
}

/**
 * @fn
 * 指定した数値について、1からその数までを内包した数値配列を作成する。
 * 
 * @param tail_num 配列末尾に格納される数値
 */ 
vector<int> spread(int num){
  vector<int> result;
  for (int i = num; i >= 1; i--) {
    result.push_back(i);
  }
  return result;
}

/**
 * @fn
 * 指定した数値配列について、重複無しで3つの数を選んで
 * それらの合計が指定した値となる組み合わせの数を取得する。
 * 
 * @param vec 数値配列
 * @param sum 合計
 * 
 */
int get_comb_count(vector<int> vec, int sum)
{
  int cnt = 0;
  for (int i = 0; i < vec.size() - 2; i++) {
    for (int j = i + 1; j < vec.size() - 1; j++) {
      for (int k = j + 1; k < vec.size(); k++) {
        if (vec.at(i) + vec.at(j) + vec.at(k) == sum) {
          cnt++;
        }
      }
    }
  }
  return cnt;
}