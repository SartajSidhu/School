#include<stdio.h>
#include<fcntl.h>
#include <string.h>
int main(){
    int f = open("list1.txt",O_WRONLY,0644); //write 
    write(f,"101   GM\tBuick\t2010\n102   Ford\tLincoln\t2005",strlen("101   GM\tBuick\t2010\n102   Ford\tLincoln\t2005")); //msg
    close(f);
}