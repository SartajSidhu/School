#include <stdio.h>
#include <fcntl.h>

int main(){

    int f = open("test.txt", O_RDONLY); //read
    printf("%d\n", lseek(f, 0, SEEK_END)); 

}