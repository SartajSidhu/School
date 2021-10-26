/* decimal to binary
   sartaj sidhu
   2020/11/18*/
#include <stdio.h>
// function 
 long long int binum(int decnum){ //input is int and output is long int
    long long int  output=0; //binary number
    long long int temp=1; //temporary num
    int rem; //remaining
  while(decnum!=0){ //loop until deciaml = 0
    rem=decnum%2; //get last digit
    decnum= decnum/2; //divide num by 2
    output= output+rem*temp; //calculate binary for curennt reminaing
    temp*=10; //multiply by 10
  }
  return output; // return out puts
}
int main(void){
  //print all outputs by calling the function
  printf("The binary number of 1 is : %lld\n",binum(1));
  printf("The binary number of 2 is : %lld\n",binum(2));
  printf("The binary number of 10 is : %lld\n",binum(10));
  printf("The binary number of 1001 is : %lld\n",binum(1001));
  printf("The binary number of 90250 is : %lld\n",binum(90250));  
}