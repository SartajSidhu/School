#include <stdio.h>

int main(void){
  int x,c;
  printf("Enter a number to check if its prime: ");
  scanf("%d",&x);
  for(c=2;c<=x/2;c++){
    if(x%c==0){
      printf("%d is a composite number",x);
      break;
    }
  
  }
  if(c==x/2+1){
    printf("%d is a prime number",x);
  }
}