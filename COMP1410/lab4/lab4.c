/* ===========================================================================
COMP -1410 Lab 4
==============================================================================
Student name: Sartaj Sidhu
Replace the error with a statement citing any sources of outside help: No help
ERROR_NO_INTEGRITY_STATEMENT
=========================================================================== */
#include <stdio.h>
#include <assert.h>
#include <string.h>

void swap(char*a, char*b){ 
  char temp=*a;
  *a=*b;
  *b=temp;
}

// select_min(str) returns a pointer to the character of minimal ASCII value
// in the string str
// requires: str is a valid string , length(str) >= 1
char * select_min(char str[]){
  char * min = str;
  int len = strlen(str);
  for (int i=0;i<len;i++){
    if(*min>*(str+i)){
      min = (str+i);
    }
  }
  return min;
}


// str_sort(str) sorts the characters in a string in ascending order
// requires: str points to a valid string that can be modified
void str_sort(char str[]){
  int len = strlen(str);
  for (int i=0;i<len;i++){
     char* min = select_min(str+i);
     swap(str+i,min);
  }
}

int main(void){
  char a[]={"sartaj"};
  char b[]={"hey"};
  char c[]={"yolo"};
  char d[]={"stop"};
  char e[]={"fedcba"};

  char z[]={"aajrst"};
  char y[]={"ehy"};
  char x[]={"looy"};
  char w[]={"opst"};
  char v[]={"abcdef"};


  char f[]={"ab"};
  char h[]={"ba"};

  char i[]={"abcd"};
  char j[]={"adcb"};

  char k[]={"xyz"};
  char l[]={"zyx"};

  assert(select_min(a)==a+1);
  assert(select_min(b)==b+1);
  assert(select_min(c)==c+2);

  str_sort(a);
  str_sort(b);
  str_sort(c);
  str_sort(d);
  str_sort(e);

  assert(strcmp(a,z)==0);
  assert(strcmp(b,y)==0);
  assert(strcmp(c,x)==0);
  assert(strcmp(d,w)==0);
  assert(strcmp(e,v)==0);

  swap(f,f+1);
  swap(i+1,i+3);
  swap(k,k+2);

  assert(strcmp(f,h)==0);
  assert(strcmp(i,j)==0);
  assert(strcmp(k,l)==0);
  printf("All tests passed successfully.\n");
}
