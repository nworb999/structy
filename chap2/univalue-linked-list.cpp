class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



bool isUnivalueList(Node* head) {
  Node* curr = head;
  bool returnVal = true;
  
  while (curr->next != nullptr) {
    returnVal = curr->val == curr->next->val && returnVal;
    curr = curr->next;
  }
  
  return returnVal;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
