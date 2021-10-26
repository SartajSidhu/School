/*midterm exam
  Sartaj Sidhu
  2020/11/14*/
#include<stdio.h>
int main(void){
  int x,y,lenx,leny,sumx,sumy,stop;
  stop=1;
  
  while(stop==1){
    sumx=0;
    sumy=0;
    lenx=0;
    leny=0;
    printf("Please enter the first integer number: ");
    scanf("%d", &x);
    printf("Please enter the second integer number: ");
    scanf("%d", &y);
    for(lenx=0;x!=0;lenx++){
      sumx=sumx+x%10;
      x/=10;
    }
    for(leny=0;y!=0;leny++){
      sumy=sumy+y%10;
      y/=10;
    }
    if(sumx==sumy && lenx==leny){
      printf("Numbers are equal.\n");
    }
    else if(lenx!=leny){
     printf("Numbers have different lengths.\n"); 
    }
    else{
      printf("Numbers are not equal.\n");
    }
    printf("Do you want to try again? (1/yes, 0/no): ");
    scanf("%d", &stop);
  }
}