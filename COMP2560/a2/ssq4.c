#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *outFile = fopen(argv[argc-1],"w"), *f;
    char buff[400];

    for(int i=1; i<argc-1; i++){
        f = fopen(argv[i],"r");
        while (fgets(buff, 400, f)) {
            fprintf(outFile, "%s", buff);
        }
        fclose(f);
    }
    fclose(outFile);
}