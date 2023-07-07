#include <string>

std::string greet(std::string name) {
  return "hey " + name;
}


void run() {
  greet("alvin");
  greet("jason");
  greet("how now brown cow");
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}

