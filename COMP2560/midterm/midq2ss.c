//Sartaj Sidhu 110039107
#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>
int main(int argc, char *argv[]){
    FILE*fr;
    char encode[5] = "1994"; 
    char buff[6];
    int len[6];
    int i =1;
    len[0] = 0;

    printf("S I D\n");
    printf("1994\n");
    
    int f = open(argv[1],O_WRONLY | O_CREAT | O_TRUNC, 0644);
    write(f,encode,strlen(encode));
    close(f);
    
    fr = fopen(argv[1], "r");
    while(!feof(fr)){
        fgets(buff,6, fr);
        if(!feof(fr)){
            break;
        }
    }

    printf("%s\n",buff);
    fclose(fr);

}