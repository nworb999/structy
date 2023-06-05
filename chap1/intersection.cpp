#include <vector>
#include <unordered_set>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  std::vector<int> result;
  std::unordered_set<int> setA;
  for (int el : a) {
    setA.insert(el);
  }
  for (int el: b) {
    if(setA.count(el) > 0) {
      result.push_back(el);
    }
  }
  return result;
}

