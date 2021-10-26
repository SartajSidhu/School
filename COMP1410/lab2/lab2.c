/* ===========================================================================
COMP -1410 Lab 2
==============================================================================
Student name: Sartaj 
Cite any other sources of outside help
(e.g., websites , other students): no help
ERROR_NO_INTEGRITY_STATEMENT
=========================================================================== */
#include <stdio.h>
#include <assert.h>
#include<stdbool.h> 
// order(a, b) orders the values pointed to by a and b so that *a <= *b;
// returns true if the values were switched and false otherwise
// requires: a and b point to memory that can be modified
bool order(int *a, int *b){
  if(*a<=*b){
    return false;
  }
  int temp= *a;
  *a=*b;
  *b=temp;
  return true;
}

// swap_pointers(a, b) [ swaps a to point to what b points to and vice versa for b ]
// requires: [ a must be > b ]
void swap_ptr(int**a, int**b) { 
  int *temp= *a;
  *a=*b;
  *b=temp;
}
int main(void) {
// Perform your tests here
  int n=1,s=2;
  assert(order(&n,&s)==false);
  n=2;
  assert(order(&n,&s)==false);
  n=3;
  assert(order(&n,&s)==true);

  int *x=&n;
  int *y=&s;
  n=5;
  s=1;

  swap_ptr(&x,&y); 
  assert(n==5);
  assert(s==1);

  printf("All tests passed successfully.\n");
}