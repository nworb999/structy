#include <unordered_map>
#include <vector>
#include <unordered_set>

int explore(std::unordered_map<int, std::vector<int>> &graph, int node, std::unordered_set<int> &visited) {
  if (visited.count(node) > 0) {
    return 0;
  }
  visited.insert(node);
  int size = 1;
  
  for (int neighbor : graph[node]) {
    size += explore(graph, neighbor, visited);
  }
  return size;
}

int largestComponent(std::unordered_map<int, std::vector<int>> graph) {
  std::unordered_set<int> visited;
  int largest = 0;
  for (auto &pair : graph) {
    int size = explore(graph, pair.first, visited);
    largest = size > largest ? size : largest;
  }
  return largest;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}
