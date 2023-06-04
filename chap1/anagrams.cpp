#include <string>
#include <unordered_map>

std::unordered_map<char, int> charCount(std::string s) {
  std::unordered_map<char, int> count;
  for (char ch : s) {
    count[ch] += 1;
  }
  return count;
}

bool anagrams(std::string s1, std::string s2) {
  return charCount(s1) == charCount(s2);
}

