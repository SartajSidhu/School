/* ===========================================================================
COMP-1410 Assignment 1
==============================================================================
Student name: Sartaj 

Cite any other sources of outside help
(e.g., websites, other students): no help
ERROR_NO_INTEGRITY_STATEMENT

=========================================================================== */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// choose(n,m) returns how many ways there are to choose m items from
//   a set of n items
// requires: 0 <= m, 0 <= n
int choose(int n, int m){
  if (m>n){
    return 0;
  }
  if(m==0 || n==m){
    return 1;
  }
  return choose(n-1,m)+choose(n-1,m-1);
}

// num_divisors_up_to_k(n,k) returns the number of positive divisors
//   of n that are less than or equal to k
// requires: 1 <= k <= n
int num_divisors_up_to_k(int n, int k){
  int count=0;
  if(k==0){
    return 0;
  }
  if(n%k==0){
    count+=1;
  }
  return count+num_divisors_up_to_k(n,k-1);
}

// is_prime(n) returns true if n is a prime number and false otherwise
// requires: 1 <= n
bool is_prime(int n){
  if(num_divisors_up_to_k(n,n)==2){
    return true;
  }
  return false;
}

// collatz(n) returns the number of steps it takes to reach 1 by
//   by repeatedly applying the Collatz mapping on n; prints each
//   number in the sequence starting at n
// requires: 1 <= n
int collatz(int n){
  int steps=0;
  printf("%d",n);

  while(n!=1){
    if(n%2==1){
      n=3*n+1;
      printf(" -> %d",n);
      steps+=1;
    }
    n/=2;
    printf(" -> %d",n);
    steps+=1;
  }
  printf("\n");
  return steps;
}

int main(void) {
  // Implement your test code here
  assert(choose(2,5)==0);
  assert(choose(2,2)==1);
  assert(choose(2,0)==1);
  assert(choose(10,5)==252);

  assert(num_divisors_up_to_k(5,0)==0);
  assert(num_divisors_up_to_k(5,1)==1);
  assert(num_divisors_up_to_k(10,5)==3);

  assert(is_prime(7)==true);
  assert(is_prime(5)==true);
  assert(is_prime(10)==false);

  assert(collatz(3)==7);
  assert(collatz(2)==1);
  assert(collatz(21)==7);
  
  int x; 
  printf("Please enter a number or enter \"quit\" to exit: ");
    while (1) {
      if (scanf (" %d", &x)==0){
        break;
      }
      else{
        if(x>=1){
          collatz(x);
        }
        else{ 
          printf ("Error: Invalid input\n");
          printf("Please enter a number or enter \"quit\" to exit: ");
          continue;
        }
      }
      printf("Please enter a number or enter \"quit\" to exit: ");
      continue;
    }
  printf("All tests passed");
}