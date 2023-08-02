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



Node* removeNode(Node* head, std::string targetVal) {
  Node* curr = head;
  Node* prev = nullptr;
  while (curr != nullptr) {
    if (curr->val == targetVal) {
      if (prev == nullptr) {
        head = curr->next;
      } else {
        prev->next = curr->next;
      }
      curr->next = prev;
      break;
    } else {
      prev = curr;
      curr = curr->next;
    }
  }
  return head;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
