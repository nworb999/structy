#include <vector>

class Node {
  public:
    int val;
    Node *next;

    Node(int initialVal)
    {
      val = initialVal;
      next = nullptr;
    }
};

Node *addLists(Node *head1, Node *head2) {
  if (head1 == nullptr) {
    return head2;
  }
  if (head2 == nullptr) {
    return head1;
  }
  
  Node dummy(0);
  Node* newCurr = &dummy;
  int carry = 0;
  
  Node* curr1 = head1;
  Node* curr2 = head2;
  
  while (curr1 != nullptr || curr2 != nullptr) {
    int sum = carry;
    
    if (curr1 != nullptr) {
      sum += curr1->val;
      curr1 = curr1->next;
    }
    if (curr2 != nullptr) {
      sum += curr2->val;
      curr2 = curr2->next;
    }
    
    carry = sum / 10;
    
    newCurr->next = new Node(sum % 10);
    newCurr = newCurr->next;
  }    
  if (carry > 0) {
     newCurr->next = new Node(carry); 
  }

  return dummy.next;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

