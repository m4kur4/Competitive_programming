#include <bits/stdc++.h>
using namespace std;

void extend_row(vector<int>& vec);
void extend_matrix(vector<vector<int>>& matrix);
void output(vector<vector<int>> matrix);


int main()
{
  int r, c;
  cin >> r >> c;
  vector<vector<int>> matrix(r+1, vector<int>(c+1, 0));
  for (int itr_r = 0; itr_r < r; itr_r++) {
    int sum_r = 0;
    for (int itr_c = 0; itr_c < c; itr_c++) {
      int temp;
      cin >> temp;
      matrix[itr_r][itr_c] += temp;
    }
  }

  extend_matrix(matrix);
  output(matrix);
  return 0;
}

void extend_row(vector<int>& vec)
{
  int count_c = vec.size();
  for (int i = 0; i < count_c-1; i++) {
    vec[count_c-1] += vec[i];
  }
}

void extend_matrix(vector<vector<int>>& matrix)
{
  int count_r = matrix.size();
  for (int itr_r = 0; itr_r < count_r-1; itr_r++) {
    extend_row(matrix[itr_r]);
    // 各列の合計を集計
    int count_c = matrix[itr_r].size();
    for (int itr_c = 0; itr_c < count_c; itr_c++) {
      matrix[count_r-1][itr_c] += matrix[itr_r][itr_c];
    }
  }
}

void output(vector<vector<int>> matrix)
{
  for (vector<int> vec: matrix) {
    for (int i = 0; i < vec.size(); i++) {
      cout << vec[i];
      if (i != vec.size()-1) {
        cout << ' ';
      }
    }
    cout << endl;
  }
}