#include<stdio.h>
void append(char s[]);
void replace(char s[],int x,int y);
int main(void){
    char str[60];
    char key[15];
    printf("Please enter a string: ");
    scanf(" %s",&str);
    printf("Please enter your search keyword: ");
    scanf(" %s",&key);
    int slen=0;
    int klen=0;
    while (str[slen] != '\0'){
        slen++;
    }
    while (key[klen] != '\0'){
        klen++;
    }
    for(int i=0;i<klen;i++){
        int j;
        for (j = 0; j < klen; j++)
            if(str[i+j]!=key[j])
                break;
        if(j==klen){
          printf("The keyword has been found in the given string\n");
          replace(str,i,j);
          return 0;
        }
        else if(j!=klen){
          printf("The keyword has not been found in the given string\n");
          append(str);
          return 0;
        }
    }
    
}

void append(char s[]){
    char name[] = {"Sartaj"};
    int namelen=6;
    int slen=0;
    int newlen=0;
    while (s[slen] != '\0'){
      slen++;
    }
    newlen = slen+namelen;
    char out [newlen];

    for (int i=0; i<slen; i++){
      out[i] = s[i];
    }

    for (int i=slen; i<newlen; i++){
      out[i] = name[i-slen];
    }
    printf("%s\n",out);
}

void replace(char s[],int x,int y){
  char name[] = {"Sartaj"};
  int namelen=6;
  int slen=0;
  int newlen=0;
  int val=y-x;
  int i,j;
  val+=1;
  while (s[slen] != '\0'){
    slen++;
  }
  newlen=slen+namelen-val;
  char out[newlen];
  for(i=0;i<x;i++){
    out[i]=s[i];
  }
  for(j=0;j<namelen;j++){
    out[i]=name[j];
    i++;
  }
  for (j = y+1 ; j < slen; j++){
    out[i] = s[j];
    i++;
  }
  out[i]='\0';
  printf("%s\n",out);
}
