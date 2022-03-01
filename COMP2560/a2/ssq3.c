#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[]){ 
   int f = open(argv[argc-1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
   int f2;
   char c[400];
   char buffer;
   int n = 0; 
   for(int i = 1; i<argc-1; i++){
       f2 = open(argv[i], O_RDONLY);
       while(read(f2, &buffer, 1) == 1){
           c[n] = buffer;
           n++;
       }
       close(f2);    
   }
   
   write(f, c, strlen(c));    

   close(f);
   exit(0);
}