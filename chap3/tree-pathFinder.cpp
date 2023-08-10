#include <vector>
#include <string>
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



std::vector<std::string>* pathFinder(Node* root, std::string targetVal) {
  if (!root) return nullptr;
  
  if (root->val == targetVal) {
    return new std::vector<std::string>{root->val};
  }
  
  std::vector<std::string>* leftPath = pathFinder(root->left, targetVal);
  if (leftPath) {
    leftPath->insert(leftPath->begin(), root->val);
    return leftPath;
  }
  
  std::vector<std::string>* rightPath = pathFinder(root->right, targetVal);
  if (rightPath) {
    rightPath->insert(rightPath->begin(), root->val);
    return rightPath;
  }
  
  return nullptr;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

