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



bool treeIncludes(Node* root, std::string targetVal) {
  if (!root) return {};
  
  std::queue<Node*> queue;
  queue.push(root);
  
  while (!queue.empty()) {
    Node* curr = queue.front();
    queue.pop();
    
    if (curr->val == targetVal) {
      return true;
    }
    
    if (curr->left) {
      queue.push(curr->left);
    }
    if (curr->right) {
      queue.push(curr->right);
    }
  }
  
  return false;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

