#include "frontend/lib.hpp"

int main() {
  int x = 3;

  A a;
  a.store(x);
  a.print();

  return 0;
}