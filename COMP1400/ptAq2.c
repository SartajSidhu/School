#include<stdio.h>
void decrypt(char msg[],int size, int shift);
char plaintext[100];
int main(){
  char text[100];
  int shift,i,size;
  printf("enter ciphered text");
  scanf("%99s",text);
  printf("enter a key value");
  scanf("%d",&shift);

  for (i = 0; text[i] != '\0'; ++i);
  size=i;

  decrypt(text,size,shift);
  printf("\nPlain Text: %s",plaintext) ;
}


void decrypt(char msg[],int size, int shift){
  for (int i=0;i<size;i++){       
    
    if (msg[i]>='A' && msg[i]<='Z'){
      plaintext[i]= (char)((int)(msg[i]-shift-65)%26 +65);
    }
    else{
      plaintext[i]= (char)((int)(msg[i]-shift-97)%26 +97);
    }
  }
}


