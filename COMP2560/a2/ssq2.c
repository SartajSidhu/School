#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   FILE *f, *fout;
   f = fopen(argv[1], "r");
   fout = fopen(argv[2], "w");
   int len[400];
   char buff[400];
   int i = 1;
   int x;
   len[0] = 0;
   
   while(!feof(f)){
       fgets(buff, 400, f);
       if(feof(f)){
           break;
       } 
       len[i] = ftell(f);
       i+=1;
   }  
  
   for(x=i-2; x>=0; x--){
       fseek(f, len[x], 0);
       fgets(buff, 400, f);
       fputs(buff, fout);
   }
   fclose(f);
   fclose(fout);
}