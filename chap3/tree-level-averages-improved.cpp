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

float average(std::vector<float> nums) {
  float sum = 0;
  for (float num : nums) {
    sum += num;
  }
  return sum / nums.size();
}

std::vector<float> levelAverages(Node* root) {
  std::vector<std::vector<float>> levels;
  fillLevels(root, levels, 0);
  
  std::vector<float> averages;
  for (std::vector<float> nums : levels) {
   averages.push_back(average(nums));
  }
  
  return averages;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

