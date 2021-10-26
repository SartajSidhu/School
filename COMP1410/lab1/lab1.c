/* ===========================================================================
COMP-1410 Lab 1: Iteration and Recursion
==============================================================================
Student name: Sartaj Sidhu

Cite any other sources of outside help
(e.g., websites, other students): No help
=========================================================================== */

#include <stdio.h>
#include <assert.h>

int dsi(int n){
  int x=0;
  while(n!=0){
    x+=n%10;
    n/=10;
  }
  return x;
}
int dsr(int n){
  if(n==0){
    return 0;
  }
  else{
    return (n%10+dsr(n/10));
  }
}

int main(void) {
  assert(dsi(1234)==10);
  assert(dsr(1234)==10);
  assert(dsi(11)==2);
  assert(dsr(11)==2);
  assert(dsi(123456789)==45);
  assert(dsr(123456789)==45);
  assert(dsi(0)==0);
  assert(dsr(0)==0);
  assert(dsi(999999999)==81);
  assert(dsr(999999999)==81);
  printf("All tests passed successfully.\n");
}