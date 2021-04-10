## やりたいこと
- 環境はWindows10
- `tasks.json`にg++でcppファイルをコンパイルするタスクを定義する
- コンパイル対象は「今アクティブなウィンドウで開いているファイル」
  - 今回の例では`C:\test\hoge.cpp`とする

## つまづいたこと
- 以下のようなタスク定義を`tasks.json`に記述
```json:tasks.json
{
  // See https://go.microsoft.com/fwlink/?LinkId=733558
  // for the documentation about the tasks.json format
  "version": "2.0.0",
  "tasks": [
    {
      "label": "g++ compile",
      "type": "shell",
      "command": "g++",
      "args": [
        "-g",
        "{file}",
        "-o",
        "${fileBasenameNoExtension}.exe"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ]
}
```
- 想定している実行コマンドは`g++ -g C:\test\hoge.cpp -o hoge.exe`
- タスクを実行すると`g++.exe: error: C:testhoge.cpp: No such file or directory`のエラー
  - tasks.argsの`${file}`に含まれている`\`が除去されている模様

## 解決策
- `"\"${file}\""`と記述する(ダブルクォートで囲むことで内部のバッククォートが除去されないようにする)
  - この時の実行コマンドは`g++ -g "C:\test\hoge.cpp" -o hoge.exe`となり、想定通り動作する

## 参考
[\" doesn't work correctly in tasks.json](https://github.com/microsoft/vscode/issues/31722)