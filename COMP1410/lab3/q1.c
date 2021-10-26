#include <stdio.h>
#include <assert.h>
// assume n is positive and less than 9 digits long
// first i check if its 0 then return 0
// then i have a vairable k of the last digit of n
// i then check if k =1
// if it does i return 1+countones n/10 to use recursion to go throughj the number until it goes to 0 or 1
// if the number doesnt equal one i go to the next number 
int count_ones(int n){
  if (n==0){
    return 0;
  }
  int k=n%10;
  if (k==1){
    return 1+count_ones(n/10);
  }
  else{
    return count_ones(n/10);
  }
}
int main(void) {
  assert(count_ones(121)==2);
  assert(count_ones(0)==0);
  assert(count_ones(1)==1);
  assert(count_ones(1212121)==4);
  assert(count_ones(111111111)==9);
  printf("All tests have passed");
}