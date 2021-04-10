#include <bits/stdc++.h>
using namespace std;

vector<double> multiple_matrix_row(vector<double> row, vector<vector<double>> matrix);
vector<vector<double>> multiple_matrix(vector<vector<double>> arg1, vector<vector<double>> arg2);
vector<vector<double>> reverse_matrix(vector<vector<double>> matrix);
vector<vector<double>> read_matrix(int row_count, int col_count);
void write_matrix(vector<vector<double>> matrix);

int main()
{
  int n, m, l;
  cin >> n >> m >> l;
  
  vector<vector<double>> A = read_matrix(n, m);
  vector<vector<double>> B = read_matrix(m, l);
  vector<vector<double>> ans = multiple_matrix(A, B);

  write_matrix(ans);
  return 0;
}

/**
 * @fn
 * 指定した列・行数で標準入力から行列を読み込む
 * 
 * @param row_count 行数
 * @param col_count 列数
 */
vector<vector<double>> read_matrix(int row_count, int col_count)
{
  vector<vector<double>> matrix;
  for (int itr_row = 0; itr_row < row_count; itr_row++) {
    vector<double> row;
    for (int itr_col = 0; itr_col < col_count; itr_col++) {
      int temp;
      cin >> temp;
      row.push_back(temp);
    }
    matrix.push_back(row);
  }
  return matrix;
}

/**
 * @fn
 * 指定した2つの行列の積を算出する
 */
vector<vector<double>> multiple_matrix(vector<vector<double>> arg1, vector<vector<double>> arg2)
{
  vector<vector<double>> result;
  for (int i = 0; i < arg1.size(); i++) {
    vector<double> row = multiple_matrix_row(arg1.at(i), arg2);
    result.push_back(row);
  }
  return result;
}

/**
 * @fn
 * 指定した行と行列の積を算出する
 */
vector<double> multiple_matrix_row(vector<double> row, vector<vector<double>> matrix)
{
  matrix = reverse_matrix(matrix);
  vector<double> result(matrix.size(), 0);
  for (int i = 0; i < matrix.size(); i++) {
    for (int k = 0; k < matrix.at(i).size(); k++) {
      result[i] += matrix.at(i).at(k) * row.at(k);
    }
  }
  return result;
}

/**
 * 指定した行列の行と列を逆転する。
 */
vector<vector<double>> reverse_matrix(vector<vector<double>> matrix)
{
  int org_row_count = matrix.size();
  int org_col_count = matrix.at(0).size();
  vector<vector<double>> matrix_reversed(org_col_count, vector<double>(org_row_count, 0));

  for(int i = 0; i < org_row_count; i++) {
    for(int k = 0; k < org_col_count; k++) {
      matrix_reversed[k][i] += matrix.at(i).at(k);
    }
  }
  return matrix_reversed;
}

/**
 * @fn
 * 指定した行列の成分を標準出力する。
 */
void write_matrix(vector<vector<double>> matrix)
{
  cout << fixed << setprecision(0);
  for (int i = 0; i < matrix.size(); i++) {
    for (int k = 0; k < matrix.at(i).size(); k++) {
      // NOTE: 指数表記と小数点以下出力なし<< std::setprecision(2)
      cout << matrix.at(i).at(k);
      if (k != matrix.at(i).size() - 1) {
        cout << ' ';
      }
    }
    cout << endl;
  }
}