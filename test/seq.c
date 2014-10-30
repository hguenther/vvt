#include "benchmarks.h"

int main() {
  NONDET_INT(n0);
  NONDET_INT(n1);
  int i0, i1, j1;
  int k;
  i0 = k = 0;

  while( i0 < n0 ) {
    i0++;
    k++;
  }
  i1 = 0;
  while( i1 < n1 ) {
    i1++;
    k++;
  }
  j1 = 0;
  while( j1 < n0 + n1 ) {
    assert(k > 0);
    j1++;
    k--;
  }
}
