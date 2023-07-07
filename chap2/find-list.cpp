#include <string>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



bool linkedListFind(Node* head, std::string target) {
  Node* current = head;
  while (current != nullptr) {
    if (current->val == target) {
      return true;
    }
    else {
      current = current->next;
    }
  }
  return false;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
