#include <algorithm>

class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



int longestStreak(Node* head) {
  if (head == nullptr) {
    return 0;
  }
  
  Node* curr = head;
  int streak = 1;
  int currStreak = 1;
  
  while (curr->next != nullptr) {
    if (curr->val == curr->next->val) {
      currStreak += 1;
    } else {
      if (currStreak > streak) {
        streak = currStreak;
      }
      currStreak = 1;
    }
    curr = curr->next;
  }
  return std::max(streak, currStreak);
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

