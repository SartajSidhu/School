#include <stdio.h>

int main(void) {
	int n,sum,i,c,digit;
	n = 2839;
	sum = 0;
	i = 0;
	c = 1;
	digit = 0;
	for(int x=0; x<8; ++x) {
		c+=1;
		printf("step is: %d\n", c);
		
		digit = n%10;
		printf("dig is: %d\n", digit);
		
		sum = sum + digit;
		printf("sum is: %d\n", sum);
		
		n/=10;
		printf("n is: %d\n", n);
		
		i+=1;
		printf("i is: %d\n", i);
	}
	printf("%d\n",sum);
}