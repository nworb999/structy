#include <vector>

std::vector<int>& fiveSort(std::vector<int> &numbers) {
  int i = 0;
  int j = numbers.size() - 1;
  while (i < j) {
    if (numbers[j]  == 5) {
      j -= 1;
    } else if (numbers[i] != 5) {
      i += 1;
    } else {
      int tmp = numbers[i];
      numbers[i] = numbers[j];
      numbers[j] = tmp;
    }
  }
  return numbers;
}

