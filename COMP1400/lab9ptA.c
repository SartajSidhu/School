/* random array printer
   sartaj sidhu
   2020/11/25*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void swap(int a, int b){ // swap function used for bubble sort
  int x =a; // sets x to a
  a=b; // sets a to b
  b=x; //sets b to a prev value (x)
}
void bubble(int arr[],int n){ //bubble sort function
  int i,j;
  for(i=0;i<n-1;i++){ //goes through the whole array
    for(j=0;j<n-1;j++){ //goes through the whole array to move numbers
      if(arr[j]>arr[j+1]){ //if j is larger than the number after it it swaps both numbers
        swap(j,j+1); // call swap function
      }
    }
  }
}
void printarr(int arr[],int n){ //print array function
  for(int i=0;i<n-1;i++){
    printf("{%d}, ",arr[i]); //prints all elements except last one
  }
  printf("{%d}",arr[n-1]); //prints the last one withoiut the comma or space after it
}
int main(void){
  srand(time(NULL));
  int num;
  printf("Please enter a positive integer: ");
  scanf("%d", &num); // scan number 
  int a[num];

  for(int i= 0;i<num;i++){ //loop to produce random numbers 
    int r = rand()%1000; // random number from 0-999
    if(r<0){
      r*=-1;
    }
    a[i]=r; // sets a[i] to the random number
  }

  clock_t t; 
  t=clock();
  bubble(a,num); // call bubble sort
  t=clock()-t;
  double timepsd = ((double)t) /CLOCKS_PER_SEC;
  printf("This is the sorted array: ");
  printarr(a,num); // print the array
  printf("\nThe total time passed is: %f seconds\n",timepsd); // print the time taken 
}