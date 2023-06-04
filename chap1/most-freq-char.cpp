#include <string>
#include <unordered_map>

std::unordered_map<char, int> charCount(std::string s) {
  std::unordered_map<char, int> counts;
  for (char ch : s) {
    counts[ch] += 1;
  }
  return counts;
}

char mostFrequentChar(std::string s) {
  std::unordered_map<char, int> counts = charCount(s);
  char best = '\0';
  for (char ch : s) {
    if (counts[ch] > counts[best]) {
      best = ch;
    }
  }
  
  return best;
}

