#include <vector>
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



std::vector<std::string> linkedListValues(Node* head) {
  Node* current = head;
  std::vector< std::string > arr;
  while (current != nullptr) {
    arr.push_back(current->val);
    current = current->next;
  }
  return arr;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

