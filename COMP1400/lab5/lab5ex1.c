#include <stdio.h>

int main(void){
	int x,y;
	printf("please enter your first number: ");
	scanf(" %d",&x);
	printf("please enter your second number: ");
	scanf(" %d",&y);
	printf("remainder of %d divided by %d is %d\n",x,y,x%y);

}