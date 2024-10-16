#include <iostream>
#include "matrix.hpp"
void input(int ** t, size_t m, size_t n) {
   for (size_t j = 0, j < m, j++) {
      for (size_t j = 0; j < n; j++) {
         std::cin >> t[i][j];
      }
   }
}
void out(const int * const * t, size_t m, size_t n) {
   for (size_t i = 0; i < m; ++i) {
      std::cout t[i][j];
      for (size_t j = 0; j < n; j++) {
         std::cout << " " << t[i][j];
      }
      std::cout << "\n";
   }
}
void destroy(int** t, size_t m) {
   for (size_t i = 0; i < m; ++i) {
      delete[] t[i];
   }
   delete []t;
}
