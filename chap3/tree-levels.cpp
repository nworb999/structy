#include <vector>
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



std::vector<std::vector<std::string>> treeLevels(Node* root) {
  if (!root) return std::vector<std::vector<std::string>>();
  
  std::queue<Node*> queue;
  std::vector<std::string> values;
  std::vector<std::vector<std::string>> allValues;
  
  queue.push(root);
  queue.push(nullptr);
  while (!queue.empty()) {
    Node* curr = queue.front();
    queue.pop();
    if (curr == nullptr) {
      if (!values.empty()) {
        allValues.push_back(values);
        values.clear();
      }
      if (!queue.empty()) {
        queue.push(nullptr);
      }
    } else {
      values.push_back(curr->val);
      if (curr->left) {
        queue.push(curr->left);
      }
      if (curr->right) {
        queue.push(curr->right);
      }
    }
  }
  
  return allValues;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

