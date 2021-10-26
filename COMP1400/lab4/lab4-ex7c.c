#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int sum;
  int dif;
  int pro;
  int div;
  printf("Sartaj Sidhu\n");
  printf("110039107\n");
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  sum = num1 + num2;
  dif = num1-num2;
  pro = num1*num2;
  div = num1/num2;
  printf("-----------------------------------------------------------------\n");
  printf("|                                                               |\n");
  printf("|                              %d+%d=%d                            |\n",num1,num2,sum);
  printf("|                              %d-%d=%d                            |\n",num1,num2,dif);
  printf("|                              %d*%d=%d                            |\n",num1,num2,pro);
  printf("|                              %d/%d=%d                            |\n",num1,num2,div);
  printf("|                                                               |\n");
  printf("-----------------------------------------------------------------\n");
  return 0;
}