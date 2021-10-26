#include <stdio.h>
float diff(int n);
int main(void) {
  int n;
  printf("Please enter an integer: ");
  scanf(" %d",&n);
  getchar();
  if(n>10){
    printf("The result is: %.2f",diff(n));
  }
  else{
    printf("The number is too small :(");
  }
}
float diff(int n){
  int size=0;
  int pro =1;
  int cur;
  float sum=0;
  while (n != 0) {
    cur=n%10;
    pro*=cur;
    sum+=cur;     
    size++;
    n/=10;
  }
  return pro-sum/size;
}