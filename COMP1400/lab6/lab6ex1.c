#include <stdio.h>

int main(void){
	int sum,x,i;
  float avg;
  printf("Enter 10 numbers : \n");
  for(i=1;i<=10;i++){
    printf("#%d :",i);
    scanf("%d",&x);
    sum+=x;
  }
  avg=sum/10;
  printf("the sum of the numbers is %d and the average is %f",sum,avg);
}