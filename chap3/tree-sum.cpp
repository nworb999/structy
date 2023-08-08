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



int treeSum(Node* root) {
  if (!root) return {};
  int sum = 0;
  std::queue<Node*> queue;
  queue.push(root);
  while (!queue.empty()) {
    Node* curr = queue.front();
    queue.pop();
    sum += curr->val;
    if (curr->left) {
      queue.push(curr->left);
    }
    if (curr->right) {
      queue.push(curr->right);
   }
  }
  return sum;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

