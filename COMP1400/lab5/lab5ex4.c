#include <stdio.h>

int main(void){
	int x,y,z,max,min;
	printf("please enter your 1st number: ");
	scanf(" %d",&x);
	max=x;
	min=x;
	printf("please enter your 2nd number: ");
	scanf(" %d",&y);
	if(y>max){
		max=y;
	}
	else{
		min=y;
	}
	printf("please enter your 3rd number: ");
	scanf(" %d",&z);
	if(z>max){
		max=z;
	}
	else if(z<min){
		min=z;
	}
	printf("%d is the largest value and %d is the smallest value \n",max,min );
	
}