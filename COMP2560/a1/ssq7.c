#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *f;
    f = fopen(argv[1],"a+");
    char c;
    char add[10000];

    while((c = fgetc(f)) != EOF){
        printf("%c", c); //print file to user
    } 

    printf("\nWhat would you like to append to the file?: ");
    fgets(add , 10000, stdin); //receive inp

    fprintf(f,"%s",add); //add it to file
    fseek(f,0,SEEK_SET);

    printf("Updated File:\n"); //show user final file
    while((c = fgetc(f)) != EOF){
        printf("%c", c);
    } 
    fclose(f);
}