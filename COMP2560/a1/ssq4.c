#include <stdio.h>
#include <fcntl.h>

int main(){
    int f = open("test.txt", O_RDONLY);
    int linecount = 0;
    char c;
    while (read(f, &c, 1) == 1) { //while there is a char
        if (c=='\n') {
            linecount++; // add one for each line
        }
    }
    linecount++; //last line ending with EOF 
    printf("%d\n", linecount);
}