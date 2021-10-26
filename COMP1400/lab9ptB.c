/* frequency
   sartaj sidhu
   2020/11/25*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarr(int arr[],int n){ //print array function
  for(int i=0;i<n-1;i++){
    printf("{%d}, ",arr[i]); //prints all elements except last one
  }
  printf("{%d}",arr[n-1]); //prints the last one withoiut the comma or space after it
}

int main(void){
  srand(time(NULL));
  int num=30;
  int f,count=0;
  int a[num];
  printf("Please enter a number in the range 0-20: ");
  while (1) {
    if (scanf (" %d", &f)&&(f<=20)&&(f>=0)) //make sure it is a integer entered between 0-20
      break;
    while (getchar() != '\n');
    printf ("Invalid, please try again: "); // if not tell the user its invalid and let them enter a new input
  }
  for(int i= 0;i<num;i++){ //loop to produce random numbers 
    int r = rand()%21; // random number from 0-999
    if(r<0){
      r*=-1;
    }
    a[i]=r; // sets a[i] to the random number
  }
  for(int j= 0;j<num;j++){ //loop to check numbers 
    if(a[j]==f){
      count+=1;
    }
  }
  
  printf("This is the array: ");
  printarr(a,num); // print the array
  printf("\nThe frequency of %d is: %d\n",f,count); // print the frequency of the input
}