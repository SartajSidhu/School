/*midterm exam
  Sartaj Sidhu
  2020/11/14*/
#include<stdio.h>
int main(void){
  int a,b,c,x,out;
  printf("Please enter four integer numbers for a, b, c, and x:");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &x);
  out = a*x*x+b*x+c;
  if(x<40000){
    printf("Q(%d) = %d * %d^2 + %d * %d + %d = %d",x,a,x,b,x,c,out);
  }
  else{
    printf("Possible overflow");
  }
}