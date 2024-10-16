#include <iostream>
void destroy(int ** t, size_t m, size_t n);
int ** create(size_t m, size_t n);
int main() {
   size_t M = 0, N = 0;
   std::cin >> M >> N;
   int ** t = create(M, N);
   destroy(t, M, N);
}
