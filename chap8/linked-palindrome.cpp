class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};


void push(Node** head_ref, int new_data) {
  Node* newNode = new Node(new_data);
  newNode->next = *head_ref;
  *head_ref = newNode;
}
 

Node* reverseAndCopy(Node* head) {
  Node* curr = head;
  Node* new_head = nullptr;
  while (curr != nullptr) {
    push(&new_head, curr->val);
    curr = curr->next;
  }
  return new_head;
}

bool linkedPalindrome(Node* head) {
  if (head == nullptr) {
    return true;
  }
  // duplicate linkedlist as reverseList
  Node* originalCurr = head;
  Node* reverseCurr = reverseAndCopy(head);
  
  // compare equality between values at each position of
  // reverseList and inputList
  
  bool returnVal = true;
  while (originalCurr->next != nullptr) {
    returnVal = originalCurr->val == reverseCurr->val && returnVal;
    originalCurr = originalCurr->next;
    reverseCurr = reverseCurr->next;
  }
  
  return returnVal;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
