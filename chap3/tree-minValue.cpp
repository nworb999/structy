#include <limits>
#include <queue>

class Node {
  public:
    int val;
    Node* left;
    Node* right;


    Node(int initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};



int treeMinValue(Node* root) {
  if (root == nullptr) return {};
  int min = std::numeric_limits<int>::max();
  std::queue<Node*> queue;
  queue.push(root);
  while (!queue.empty()) {
    Node* curr = queue.front();
    queue.pop();
    
    if (curr->val < min) {
      min = curr->val;
    }
    if (curr->left) {
      queue.push(curr->left);
    }
    if (curr->right) {
      queue.push(curr->right);
    }
    
  }
  
  
  return min;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

