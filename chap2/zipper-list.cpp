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



Node* zipperLists(Node* head1, Node* head2) {
  Node* newHead = head1;
  Node* tail = newHead;
  
  Node* current1 = head1->next;
  Node* current2 = head2;
  
  int count = 1;
  while (current1 != nullptr && current2 != nullptr) {
    if (count % 2 == 0) {
      tail->next = current1;
      current1 = current1->next;
    } else {
      tail->next = current2;
      current2 = current2->next;
    }
    tail = tail->next;
    count +=1;
  }
  
  if (current1 != nullptr) {
    tail->next = current1;
  }
  if (current2 != nullptr) {
    tail->next = current2;
  }
  
  return newHead;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
