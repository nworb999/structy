#include <limits>
#include <algorithm>

class Node {
  public:
    int val;
    Node* left;
    Node* right;


    Node(int initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};



int maxPathSum(Node* root) {
  if (root==nullptr) {
    return std::numeric_limits<int>::min();
  }
  if (root->left == nullptr && root->right ==nullptr) {
    return root->val;
  }
  
  return root->val + std::max(
    maxPathSum(root->left),
    maxPathSum(root->right)
  );
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

