#include <string>
#include <vector>


class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



Node* createLinkedList(std::vector<std::string> values) {
  Node* head = nullptr;
  Node* curr = head;
  for (const std::string& str : values) {
    if (curr == nullptr) {
      curr = new Node(str);
      head = curr;
    } else {
      curr->next = new Node(str);
      curr = curr->next;
    }
  }
  return head;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

