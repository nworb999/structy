#include <unordered_map>
#include <vector>
#include <string>
#include <queue>


bool hasPath(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {
  if (src == dst) {
    return true;
  }
  for (std::string neighbor : graph[src]) {
    if (hasPath(graph, neighbor, dst) == true) {
      return true;
    };
  }
  return false;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

