#include <string>
#include <vector>
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



std::vector<std::string> breadthFirstValues(Node* root) {
  if (!root) return {};
  
  std::queue<Node*> queue;
  std::vector<std::string> values;
  
  queue.push(root);
  while (!queue.empty()) {
    Node* curr = queue.front();
    queue.pop();
    values.push_back(curr->val);
    
    if (curr->left) {
      queue.push(curr->left);
    }
    if (curr->right) {
      queue.push(curr->right);
    }
  }
  
  return values;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

