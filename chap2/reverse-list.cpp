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



Node* reverseList(Node* head) {
  Node* prev = nullptr;
  Node* current = head;
  while (current != nullptr) {
    Node* next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  
  return prev;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
