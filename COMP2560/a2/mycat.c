#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
    int f = open(argv[1], O_RDONLY);
    char c;
    while(read(f,&c,1) == 1){
        putc(c, stdout);
    }
    putc('\n',stdout);
}

