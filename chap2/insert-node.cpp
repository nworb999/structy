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



Node* insertNode(Node* head, std::string value, int idx) {
  if (idx < 0) {
    return head;  // Invalid index.
  }
  
  Node* newNode = new Node(value);
  if (idx == 0) {
    newNode->next = head;
    return newNode;
  }
  
  Node* curr = head;
  int currIdx = 0;
  
  while (curr->next != nullptr && currIdx < idx - 1) {
    curr = curr->next;
    currIdx += 1;
  }
  if (curr == nullptr) {
    // don't leak memory
    delete newNode;
    return head;
  }
  newNode->next = curr->next;
  curr->next = newNode;
  return head;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

