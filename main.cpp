#include <iostream>
#include <matrix.cpp>
int main() {
   size_t M = 0, N = 0;
   std::cin >> M >> N;
   int ** t = create(M, N);
   destroy(t, M, N);
}
