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



std::vector<std::string>* _pathFinder(Node* root, std::string targetVal) {
  if (!root) return nullptr;
  
  if (root->val == targetVal) {
    return new std::vector<std::string>{root->val};
  }
  
  std::vector<std::string>* leftPath = _pathFinder(root->left, targetVal);
  if (leftPath) {
    leftPath->push_back(root->val);
    return leftPath;
  }
  
  std::vector<std::string>* rightPath = _pathFinder(root->right, targetVal);
  if (rightPath) {
    rightPath->push_back(root->val);
    return rightPath;
  }
  
  return nullptr;
}

std::vector<std::string>* pathFinder(Node* root, std::string targetVal)  {
  std::vector<std::string>* res = _pathFinder(root, targetVal);
  if (res == nullptr) {
    return res;
  } else {
    std::reverse(res->begin(), res->end());
    return res;
  }
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

