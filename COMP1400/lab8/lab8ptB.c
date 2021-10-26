/* factorial calc
   sartaj sidhu
   2020/11/18*/
#include <stdio.h>
// function 
long long int fact(int n){
  if(n>=1){ //if n isnt 0 keep running
    return n*fact(n-1); //multiply n by itself - 1 and then return that value
  }
  else{
    return 1; 
  }
}

int main(void) {
  printf("factorial of 2 = %lld\n", fact(2));
  printf("factorial of 3 = %lld\n", fact(3));
  printf("factorial of 4 = %lld\n", fact(4));
  printf("factorial of 5 = %lld\n", fact(5));
  printf("factorial of 10 = %lld\n", fact(10));
  printf("factorial of 15 = %lld\n", fact(15)); 
}

/* The max value is 20 because when the factorial crosses it size it gives an negative value*/