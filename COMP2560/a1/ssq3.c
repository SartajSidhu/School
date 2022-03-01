#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * f; 
    f = fopen("list1.txt","w");
    char str[50] = "101   GM\tBuick\t2010\n102   Ford\tLincoln\t2005";
    fputs(str,f);
    fclose(f);
}
