/*midterm exam
  Sartaj Sidhu
  2020/11/14*/
#include<stdio.h>
int main(void){
  int x,n,j,nfact,stop;
  
  float sum,c;
  stop=1;
  while(stop==1){
    nfact=1;
    sum=-1;
    printf("Please enter a positive integer value (between 1 and 7, inclusive): ");
    scanf("%d", &n);
    while(n<1 || n>7){
      printf("Sorry that is an invalid input please enter a new one: ");
      scanf("%d", &n);
    }
    x=n+1;
    n=n+1;
    
    int vals[x];
    for(int i=0;n>=1;n--,i++){
      for(int j=1;j<=n;j++){
        nfact*=j;
      }
      vals[i]=nfact;
      c=(float)1/(float)nfact;
      sum+=c;
      nfact=1;
    }
    printf("1/%d",vals[x-2]);
    for(x=x-3; x>=0; x--){
      
      printf(" + 1/%d",vals[x]); //print the array
    }
   printf(" = %.3f\n",sum);
   printf("Do you want to try again? (1/yes, 0/no): ");
   scanf("%d", &stop);
  }
}