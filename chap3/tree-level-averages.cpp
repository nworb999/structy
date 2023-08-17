#include <vector>

class Node {
  public:
    float val;
    Node* left;
    Node* right;


    Node(float initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};



void fillLevels(Node* root, std::vector<std::vector<float>> &levels, float level) {
  if (root == nullptr) {
    return;
  }
  
  if (levels.size() == level) {
    levels.push_back(std::vector<float> { root->val });
  } else {
    levels[level].push_back( { root->val });
  }
  
  fillLevels(root->left, levels, level + 1);
  fillLevels(root->right, levels, level + 1);
}

std::vector<float> levelAverages(Node* root) {
  std::vector<std::vector<float>> levels;
  std::vector<float> averages;
  fillLevels(root, levels, 0);
  for (const auto& innerVec : levels) {
    int sum = 0;
    
    for (int num : innerVec) {
      sum += num;
    }
    
    float average = static_cast<float>(sum) / innerVec.size();
    averages.push_back(average);
  }
  
  return averages;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

