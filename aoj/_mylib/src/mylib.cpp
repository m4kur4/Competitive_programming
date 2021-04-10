#include <bits/stdc++.h>

std::vector<std::string> _split(std::string target, std::string delimiter);

// ========================================================================



// ========================================================================

/**
 * @fn
 * 文字列を指定した区切り文字で分割します。
 * 空白文字は無視されます。
 * 
 * @brief 文字列を指定した区切り文字で分割する。
 * @param target 対象の文字列
 * @param delimiter 区切り文字
 * @return 分割された文字列の配列
 */
std::vector<std::string> _split(std::string target, std::string delimiter) {
  
  std::vector<std::string> result;
  int delimiter_length = delimiter.length();

  if (delimiter_length == 0) {
    result.push_back(target);
  } else {
    std::string::size_type offset = std::string::size_type(0);
    while(true) {
      std::string::size_type position = target.find(delimiter, offset);
      if (position == std::string::npos) {
        // 最後の分割
        std::string item = target.substr(offset);
        if (item != "") {
          result.push_back(item);
        }
        break;
      }
      // 途中の分割
      std::string item = target.substr(offset, position - offset);
        if (item != "") {
          result.push_back(item);
        }
      offset = position + delimiter_length;
    }
  }
  return result;
}