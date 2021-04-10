#include <bits/stdc++.h>
using namespace std;

vector<int> input(int N);
void output(vector<int> target);
vector<int> insertion_sort_asc(vector<int> target);

int main()
{
  int N;
  cin >> N;

  vector<int> target_org = input(N);
  vector<int> target_sorted = insertion_sort_asc(target_org);
  output(target_sorted);

  return 0;
}

vector<int> input(int N)
{
  vector<int> result(N, 0);
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    result[i] += temp;
  }
  return result;
}

vector<int> insertion_sort_asc(vector<int> target)
{
  int target_size = target.size();
  if (target_size <= 1) {
    return target;
  }

  // 入力前の状態を出力
  output(target);
  for (int i = 1; i < target_size; i++) {
    int v = target[i];
    int j = i - 1;
    while (j >= 0 && target.at(j) >= v) {
      target[j + 1] = target.at(j);
      j--;
    }
    target[j + 1] = v;

    if (i != target_size - 1) {
      // ソート中の状態を出力
      output(target);
    }
  }
  return target;
}

void output(vector<int> target)
{
  int target_size = target.size();
  for(int i = 0; i < target_size; i++) {
    cout << target[i];
    if (i != target_size - 1) {
      cout << ' ';
    }
  }
  cout << endl;
}
