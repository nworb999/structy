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

void inOrderTraversal(Node* root, std::vector<std::string>& result) {
  if (!root) return;
  
  if (root->left == nullptr && root->right == nullptr) {
      result.push_back(root->val);
  }
  inOrderTraversal(root->left, result);
  inOrderTraversal(root->right, result);
}

std::vector<std::string> leafList(Node* root) {
  std::vector<std::string> result;
  inOrderTraversal(root, result);
  return result;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

