#include "benchmarks.h"

int main (){
  int x, y;
  x = 0;
  y = 0;
  
  while (__nondet_bool()){
    x = x+1;
    y = y+1;
  }
  
  while (x > 0){
    x = x - 1;
    y = y - 1;
  }
  
  assert (y >  -1);
}
