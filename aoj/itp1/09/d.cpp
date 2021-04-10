#include <bits/stdc++.h>
using namespace std;

string cmd_replace(string& line);
string cmd_reverse(string& line);
string cmd_print(string& line);

int main()
{
  string line;
  cin >> line;
  int count_cmd;
  cin >> count_cmd;

  for (int i = 0; i < count_cmd; i++) {
    string name_cmd;
    cin >> name_cmd;

    if (name_cmd == "replace") {
      cmd_replace(line);

    } else if (name_cmd == "reverse") {
      cmd_reverse(line);

    } else if (name_cmd == "print") {
      cmd_print(line);
    }
  }
}

string cmd_replace(string& line)
{
  int from, to, length;
  string target;
  cin >> from >> to >> target;
  length = to - from + 1;

  line.replace(from, length, target);
  return line;
}

string cmd_reverse(string& line)
{
  int from, to, length;
  cin >> from >> to;
  length = to - from + 1;

  string target = line.substr(from, length);
  reverse(target.begin(), target.end());
  line.replace(from, length, target);
  return line;
}

string cmd_print(string& line)
{
  int from, to, length;
  cin >> from >> to;
  length = to - from + 1;

  string target = line.substr(from, length);
  cout << target << endl;
  return line;
}
