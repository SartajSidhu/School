#include<stdio.h>
void act_3(int a);
int x=2;
int main()
{
printf("the value of x is:%d\n", x);
act_3(x);
printf("the value of x is:%d", x);
}
void act_3(int a)
{
x=x*++a;
} 
