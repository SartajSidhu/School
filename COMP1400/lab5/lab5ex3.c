#include <stdio.h>

int main(void){
	int x;
	printf("please enter a year: ");
	scanf(" %d",&x);
	if(x%4==0){
		if(x%10!=0 || x%400==0){
			printf("%d is a leap year!\n",x );
		}
	}
	else{
		printf("%d is not a leap year\n",x );
	}
}