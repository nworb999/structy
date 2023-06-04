#include <string>

std::string uncompress(std::string s) {
  std::string result = "";
  std::string numbers = "0123456789";
  int i = 0;
  int j = 0;
  while(j < s.length()) {
    if (numbers.find(s[j]) != std::string::npos) {
      j += 1;
    } else {
      int count = std::stoi(s.substr(i, j));
      for (int n = 0; n < count; n += 1) {
        result += s[j];
      }
      j += 1;
      i = j;
    }
  }
  
  return result;
}

