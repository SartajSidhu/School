#include <stdio.h>

int main(){
    FILE *f;
    char c;
    int linecount = 0;
    f = fopen("test.txt","r");
    for (c = getc(f); c != EOF; c = getc(f)){ //while it isnt EOF
        if (c =='\n'){
            linecount++; // add for each line
        }
    }
    linecount++; //last line ending with EOF 
    fclose(f);
    printf("%d\n", linecount);
            
}