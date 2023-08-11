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


int _treeValueCount(Node* root, int targetVal, int count) {
  if (!root) return count;
  if (root->val == targetVal) {
    count += 1;
  }
  
  count = _treeValueCount(root->left, targetVal, count);
  count = _treeValueCount(root->right, targetVal, count);
  
  return count;
}


int treeValueCount(Node* root, int targetVal) {
  if (root == nullptr) {
    return 0;
  } else {
    return _treeValueCount(root, targetVal, 0);
  }
}




void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

