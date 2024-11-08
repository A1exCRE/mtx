#include <iostream>
#include "matrix.hpp"

int main() {
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  if (!std::cin) {
    return 1;
  }
  Matrix mtx(m, n);
  mtx.input(std::cin);
  if (!std::cin) {
    return 1;
  }
  mtx.output(std::cout);
}
