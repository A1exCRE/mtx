#include <iostream>
#include "matrix.hpp"

int main() {
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  if (!std::cin) {
    return 1;
  }
  int ** t = nullptr;
  try {
    t = create(M, N);
  } catch (const std::bad_alloc & e) {
    std::cerr << "Out of memory\n";
    return 1;
  }
  input(t, M, N);
  out(t, M, N);
  destroy(t, M);
}
