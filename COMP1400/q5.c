#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void dsort(int a[],int x);
void printarr(int a[],int x);
int main(void) {
  srand(time(NULL));
  char con='Y';
  int len;
  int rns[len];
  while (con=='Y'){
    printf("Please enter the number of random numbers you would like: ");
    scanf(" %d",&len);
    while(len<1){
      printf ("Invalid, please try again: ");
      scanf(" %d",&len);
      }
    
    for(int i=0;i<len;i++){
      rns[i]=rand() % 1000 + 1;
    }
    dsort(rns,len);
    printarr(rns,len);
    printf("Would you like to continue? Enter (Y) if yes or (N) for no: ");
    scanf(" %s",&con);
    if(con=='N'){
      printf("Thankyou for using my random number list generator!\n");
      break;
    }
  }
}

  
void dsort(int a[],int x){
  for (int i = 0; i < x; i++){
    for (int j = i + 1; j < x; j++){
      if (a[i] < a[j]) {
        x = a[i];
        a[i] = a[j];
        a[j] = x;
      }
    }
  }
}

void printarr(int a[],int x){
  for (int i = 0; i < x-1; i++){
    printf("%d, ",a[i]);
  }
  printf("%d\n",a[x-1]);
}