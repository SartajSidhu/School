#include <stdio.h>
int main(void) {
  int a[30];
  int out=1;
  printf("My name is: Sartaj Sidhu\n");
  printf("Please enter 10 integer numbers separated by comma, press 'Enter' after that: ");
  for(int i=0;i<10;i++){
    scanf(" %d", &a[i]);
    getchar();
  }
  for(int i=1;i<10;i+=2){
    if(a[i]%2==0 && a[i]!=0){
      out*=a[i];
    }
  }