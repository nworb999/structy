#include <vector>
#include <string>
#include <stack>
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

void fillLevels(Node* root, std::vector<std::vector<std::string>> &levels, int level) {
  if (root == nullptr) {
    return;
  }
  
  if (levels.size() == level) {
    levels.push_back(std::vector<std::string> { root->val });
  } else {
    levels[level].push_back(root->val);
  }
  
  fillLevels(root->left, levels, level + 1);
  fillLevels(root->right, levels, level + 1);
};

std::vector<std::vector<std::string>> treeLevels(Node* root) {
  std::vector<std::vector<std::string>> levels;
  fillLevels(root, levels, 0);
  return levels;
};



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

