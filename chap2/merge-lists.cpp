class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};


Node* mergeLists(Node* head1, Node* head2) {
  Node dummyHead(0);
  Node* tail = &dummyHead;
  
  Node* current1 = head1;
  Node* current2 = head2;
  
  while (current1 != nullptr && current2 != nullptr) {
    if (current1->val < current2->val) {
      tail->next = current1;
      current1 = current1->next;
    } else {
      tail->next = current2;
      current2 = current2->next; 
    }
    tail = tail->next;
  }

  if (current1 != nullptr) {
    tail->next = current1;
  } 
  if (current2 != nullptr) {
    tail->next = current2;
  }
  
  return dummyHead.next;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

