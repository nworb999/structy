#include <string>
#include <vector>
#include <stack>


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



std::vector<std::string> depthFirstValues(Node* root) {
  if (!root) return {};
  
  std::vector<std::string> values;
  std::stack<Node*> nodes;
  
  nodes.push(root);
  
  while (!nodes.empty()) {
    Node* curr = nodes.top();
    nodes.pop();
    
    values.push_back(curr->val);
    
    if (curr->right) {
      nodes.push(curr->right);
    }
    if (curr->left) {
      nodes.push(curr->left);
    }
  }
  return values;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

