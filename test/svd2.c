#include <stdbool.h>

void assert(bool);
void assume(bool);
int __undef_int() __attribute__((pure));
bool __undef_bool() __attribute__((pure));

int main()
{
  int n = __undef_int();
  int i,j,k;
  int l = __undef_int();
  
  if (l<=0) return 0;

  i = n;
  while (i>=1) { // Accumulation of right-hand transwhilemations. 
    if (i < n) {
      if (__undef_bool()) {
        j = l;
	while (j<=n) { // Double division to avoid possible underflow.   
	  j++;
	}
	j = l;
	while (j<=n) {
	  k = l;
	  while (k<=n) { 
	    k++;
	  }
	  k = l;
	  while (k<=n) { 
	    assert(1<=i);assert(i<=n);
	    k++;
	  }
	  j++;
	}
      }
      j = l;
      while (j<=n) { 
        j++;
      }
    }
    
    l=i;
    i--;
  }
}