#include <vector>
#include <string>
#include <queue>
#include <tuple>

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
  if (root == nullptr) {
    return std::vector<std::vector<std::string>>();
  }
  
  std::queue<std::tuple<Node*, int>> queue;
  std::vector<std::vector<std::string>> result;
  queue.push(std::tuple {root, 0 });
    
  while (queue.size() > 0) {
    auto [curr, level] = queue.front();
    queue.pop();
    
    if (result.size() == level) {
      result.push_back(std::vector<std::string> {curr->val});
    } else {
      result[level].push_back( {curr->val} );
    }
    
    if (curr->left) {
      queue.push(std::tuple { curr->left, level + 1 });
    }
    if (curr->right) {
      queue.push(std::tuple { curr->right, level + 1 });
    }
    
  }
  return result;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

