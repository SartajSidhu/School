#include <stdio.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";
int main(){
    FILE *f;
    f = fopen("file.hole","w");
    fprintf(f,"%s",buf1);
    fseek(f,16384,SEEK_SET);
    fprintf(f,"%s",buf2);
    fclose(f);
}

