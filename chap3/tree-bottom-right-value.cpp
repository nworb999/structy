#include <string>
#include <queue>

class Node {
  public:
    std::string val;
    Node* left;
    Node* right;


    Node(std::string initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};


std::string bottomRightValue(Node* root) {
  if (!root) return {};
  
  std::queue<Node*> queue;

  queue.push(root);
  Node* curr;
  
  while (!queue.empty()) {
    curr = queue.front();
    queue.pop();

    if (curr->left != nullptr) {
      queue.push(curr->left);
    }
    if (curr->right != nullptr) {
      queue.push(curr->right);
    }
  }
  return curr->val;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

