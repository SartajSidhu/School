#include<stdio.h>
int main(void){
 int x=1,y=2,z=3;
 printf(" x = %d, y = %d, z = %d \n", x, y, z);
 {
 float y=15;
 x=10, z=4;
 printf(" x = %d, y = %f, z = %d \n", x, y, z);
 {
 z=50;
 printf(" x = %d, y = %f, z = %d \n", x, y, z);
 }
 }
} 
