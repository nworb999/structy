#include <vector>
#include <string>
#include <algorithm>

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


std::vector<std::vector<std::string>> allTreePaths(Node* root) {
  if (root == nullptr) {
    return std::vector<std::vector<std::string>>();
  }
  // now that leaf is reached, explore all paths
  if (root->left == nullptr && root->right == nullptr) {
    return std::vector<std::vector<std::string>>{ {root->val} };
  }
  std::vector<std::vector<std::string>> result;
  std::vector<std::vector<std::string>> leftPaths = allTreePaths(root->left);
  for (std::vector<std::string> path : leftPaths) {
    path.insert(path.begin(), root->val);
    result.push_back(path);
  }
  std::vector<std::vector<std::string>> rightPaths = allTreePaths(root->right);
  for (std::vector<std::string> path : rightPaths) {
    path.insert(path.begin(), root->val);
    result.push_back(path);
  }
  return result;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

