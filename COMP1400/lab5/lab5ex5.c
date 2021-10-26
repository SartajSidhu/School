#include <stdio.h>

int main(void){
	long int x,r;
  int d,total;
  total=0;
  int out=10;
	printf("Enter the first twelve digits of ISBN-13: ");
	scanf("%ld",&x);
  for(int i=0;i<=12;i++){
    d=x%10;
    x=x/10;
    if(i%2==0){
      d=d*3;
      total+=d;
    }
    else{
      total+=d;
    }
  }
  r=total%10;
  out-=r;
  printf("check digit is: %d\n",out);
}