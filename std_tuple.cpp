#include <iostream>
#include <tuple>

int main() {
  std::cout << "Hello World!\n";

  std::tuple<int, std::string, bool> test = {25, "Cap Mike", true};

  std::cout << std::get<1>(test) << std::endl;

  return 0;
}

// Output:
// Cap Mike
