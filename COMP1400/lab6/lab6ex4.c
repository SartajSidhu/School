#include <stdio.h>

int main(void){
  int x,i,p;
  printf("enter a number: ");
  scanf("%d",&x);
  for(i=1;i<=10;i++){
    p=x*i;
    printf("%d x %d = %d \n",x,i,p);
  }
}