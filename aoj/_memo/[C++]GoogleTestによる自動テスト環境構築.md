[公式ドキュメント](http://opencv.jp/googletestdocs/primer.html)

## メモ
- ビルドツール CMake でビルドする必要がある
  - ビルドツール？ g++ とは違う？
    - g++ は「コンパイラ」
  - ビルドとコンパイルの違いとは
    - コンパイルはビルドの中で行われる処理の一つで、ソースコードを機械語に翻訳すること
    - ビルドは一連のソースコードを翻訳してリンクさせ、プログラムとして動作する形に変換すること
  - g++ でもリンクは可能だが、コンパイルのコマンドと別に実行する必要がありめんどくさい
    - CMake なら一連の作業を自動化できる

## Windows で CMake をセットアップする
- [CMkae for Windows](https://cmake.org/download/)
### インストール
- cmake-3.20.0-rc3-windows-x86_64.msi
  - 最新版のWindowsバイナリ
- Add CMake to the system PATH for all users
- インストール後確認
```bash
$ where cmake
$ where cmake-gui
$ cmake # ヘルプが表示
```

## GoogleTest のセットアップ
- GitHub から落としてくる
- CMake でビルド
  - googletest内に適当なフォルダを作って移動し、`cmake ..`
  - `googletest-distribution.sln` を VS で開き、`ALL_BUILD` をリビルド

## なんか色々上手くいかないので下記参考で
https://medium.com/swlh/google-test-installation-guide-for-c-in-windows-for-visual-studio-code-2b2e66352456