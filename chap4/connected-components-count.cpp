#include <unordered_map>
#include <unordered_set>
#include <vector>


bool explore(std::unordered_map<int, std::vector<int>> &graph, int node, std::unordered_set<int> &visited) {
  if (visited.count(node) > 0) {
    return false;
  }
  visited.insert(node);
  
  for (int neighbor : graph[node]) {
    explore(graph, neighbor, visited);
  }
  
  return true;
}

int connectedComponentsCount(std::unordered_map<int, std::vector<int>> graph) {
  std::unordered_set<int> visited;
  int count = 0;
  for (auto &pair : graph) {
    if (explore(graph, pair.first, visited)) {
      count += 1;
    }
  }  
  return count;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

