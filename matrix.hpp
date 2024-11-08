#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>
void destroy(int ** t, size_t m);
int ** create(size_t m, size_t n);
void input(int ** t, size_t m, size_t n);
void output(const int * const * t, size_t m, size_t n);
struct Matrix {
  ~Matrix() {
    ::destroy(t_, m_);
  }
  Matrix(size_t m, size_t n):
   t_(::destroy(m, n)), m_(m), n_(n)
  {}
  void output(std::ostream & out) {
    ::output(out, t_, m_, n_);
  }
  void input(std::istream & in) {
    ::input(in, t_, m_, n_);
  }
  int ** t_;
  size_t m_, n_;
};
#endif
