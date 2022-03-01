#include<stdio.h>
#include <string.h>
#include<fcntl.h>

int main ( int argc, char *argv[] ){
        int f = open( argv[1],O_RDWR | O_APPEND);
        char old[10000];
        char add[10000];
        int size = read(f,old,sizeof(old)); //size of file for loop

        for(int x = 0; x<size ; x++){
            printf("%c",old[x]); // print file to user
        }
        printf("\nWhat would you like to append to the file?: ");
        scanf("%[^\n]s",add); //scan until new line or EOF
        write(f,add,strlen(add)); //add to the end of the file users msg
        close(f); //close file

        int final = open( argv[1],O_RDONLY); //open once again to show user final completed file
        int size2 = read(f,old,sizeof(old));
        printf("Updated File:\n");
        for(int x = 0; x<size2 ; x++){
            printf("%c",old[x]);
        }
        printf("\n");
}