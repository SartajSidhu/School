#include <stdio.h>

// matrix must have 10 colums 
// I go through the list going by each column then every single element in that column
// I then add those to a variable
// once i have reaxhed the end of the column I add my current number to the sum array
void col_sums(int n, int m, int matrix [][10] , int sums []){
  int cur = 0;
  for(int j=0; j<m;j++){
    for(int i=0;i<n;i++){
      cur=cur+matrix[i][j];
    }
    sums[j]=cur;
    cur=0;
  }
}
// prints the matrix for the sum matrix 
void printmat(int n, const int m[]){
  for(int i=0;i<n;i++){
    printf("%d ",m[i]);
  }
  printf("\n");
}

int main(void) {
  int d[3][10]={{1,2,1},{4,5,6},{7,8,9}};
  int s[]={0,0,0};
  col_sums(3,3,d,s);
  printmat(3,s);
}