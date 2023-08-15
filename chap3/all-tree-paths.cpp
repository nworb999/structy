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



void treePaths(Node* root, std::vector<std::string>& path, std::vector<std::vector<std::string>>& allPaths) {
  if (root == nullptr) return;
  path.push_back(root->val);
  if (root->left == nullptr && root->right == nullptr) {
    allPaths.push_back(path);
  } else {
    treePaths(root->left, path, allPaths);
    treePaths(root->right, path, allPaths);
  }
  path.pop_back();
}


std::vector<std::vector<std::string>> allTreePaths(Node* root) {
  std::vector<std::string> path;
  std::vector<std::vector<std::string>> allPaths;
  treePaths(root, path, allPaths);
  return allPaths;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

