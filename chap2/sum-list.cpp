class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



int sumList(Node* head) {
  Node* current = head;
  int sum = 0; 
  while (current != nullptr) {
    sum += current->val;
    current = current->next;
  }
  return sum;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
