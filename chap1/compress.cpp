#include <string>

std::string compress(std::string s) {
  std::string result = "";
  int i = 0;
  int j = 0;
  while (j <= s.length()) {
    if (s[i] == s[j]) {
      j += 1;
    } else {
      int count = j - i;
      if (count == 1) {
        result += s[i];
      } else {
      result += std::to_string(count) + s[i];
      }
      i = j;
    }
  }
  return result;
}

