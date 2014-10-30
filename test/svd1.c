#include "benchmarks.h"

int main()
{
  NONDET_INT(n);
  int i,j,k;
  NONDET_INT(l);
  
  if (l<=0) return 0;

  i = n;
  while (i>=1) { // Accumulation of right-hand transwhilemations. 
    if (i < n) {
      if (__nondet_bool()) {
        j = l;
	while (j<=n) { // Double division to avoid possible underflow.   
	  assert(1<=j);assert(j<=n);
	  assert(1<=i);assert(i<=n);
	  //assert(1<=i);assert(i<=m); // TODO feasible counterexample found
	  assert(1<=l);assert(l<=n);
	  j++;
	}
	j = l;
	while (j<=n) {
	  k = l;
	  while (k<=n) { 
	    //assert(1<=i);assert(i<=m); // TODO feasible counterexample found
	    assert(1<=k);assert(k<=n);
	    assert(1<=j);assert(j<=n);
	    k++;
	  }
	  k = l;
	  while (k<=n) { 
	    assert(1<=k);assert(k<=n);
	    assert(1<=j);assert(j<=n);
	    assert(1<=i);assert(i<=n);
	    k++;
	  }
	  j++;
	}
      }
      j = l;
      while (j<=n) { 
        assert(1<=j);assert(j<=n);
	assert(1<=i);assert(i<=n);
	j++;
      }
    }
    
    assert(1<=i);
    assert(i<=n);
    assert(1<=i);assert(i<=n);
    l=i;
    i--;
  }
}
