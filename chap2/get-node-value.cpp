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


std::string getNodeValue(Node* head, int idx) {
  Node* current = head;
  int pos = 0;
  while (current != nullptr) {
    if (pos == idx) {
      return current->val;
    }
    current = current->next;
    pos += 1;
  }
  return "";
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
