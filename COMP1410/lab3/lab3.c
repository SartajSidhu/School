/* ===========================================================================
COMP-1410 Lab 3
==============================================================================
Student name: Sartaj

Cite any other sources of outside help
(e.g., websites, other students): Navraj Toor
ERROR_NO_INTEGRITY_STATEMENT

=========================================================================== */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool matrixeql (int n, const int a[][3], const int b[][3]){
  for(int i=0;i<n;i++){
    for(int j=0; j<3;j++)
      if(a[i][j]!=b[i][j]){
        return false;
      }
  } 
  return true;
}

bool mateqlptr (int n, int *a, int *b){
  for (int i =0; i<n*3;i++){
    if(*a!=*b){
      return false;

      a++;
      b++;
    }
  }
  return true;
}

void printmat(int n, const int m[][3]){
  for(int i=0;i<n;i++){
    for(int j=0; j<3;j++)
      printf("%d ",m[i][j]);
    printf("\n");
  }
}



// matrix_add(n, a, b, c) computes the sum of the n x 3 matrices a and b;
//   the result is stored in the n x 3 matrix c
// requires: n >= 1
void matrix_add(const int n, const int a[][3], const int b[][3], int c[][3]){

  for(int i=0;i<n;i++){
    for(int j=0; j<3;j++){
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

// negate_column(n, c, a) negates the entries in column c of the n x 3
//   matrix a
// requires: n >= 1, 0 <= c < 3
void negate_column(const int n, const int c, int a[][3]){
  for(int i=0;i<n;i++){
    for(int j=0; j<3;j++){
      if(j==c){
        a[i][j]*=-1;
      }
    }
  }
}

// negate_row(n, r, a) negates the entries in row r of the n x 3 matrix a
// requires: n >= 1, 0 <= r < n
//           a points to the (0, 0) element of an n x 3 matrix
void negate_row(const int n, const int r, int * a){
  for (int i =0; i<n;i++){
    for(int j=0;j<3;j++){
      if(i==r){
        *a*=-1;
      }
      a++;
    } 
  }
}

int main(void) {
  int a[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
  int b[3][3] = {{0, -1, -2}, {-3, -4, -5}, {-6, -7, -8}};
  int c[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int d[3][3] = {{0, 1, 2}, {-3, -4, -5}, {6, 7, 8}};
  int e[3][3] = {{0, 1, 0}, {0, 4, 0}, {0, 7, 0}};
  
  int f[3][3] = {{0, -1, -2}, {3, -4, -5}, {6, -7, -8}};
  int g[3][3] = {{0, 2, 2}, {3, 8, 5}, {6, 14, 8}};
  int h[3][3] = {{0, -1, -2}, {3, 4, 5}, {6, 7, 8}};
  int i[3][3] = {{0, 1, 2}, {-3, -4, -5}, {-6, -7, -8}};
  int j[3][3] = {{0, -1, 0}, {0, -4, 0}, {0, -7, 0}};

  int *ptr_a = a;
  int *ptr_h =h;
  int *ptr_d= d;
  int *ptr_i=i;
  

  int x[3][3];
  int y[3][3];
  // Perform testing here, e.g., that a + b = c
  matrix_add(3, a, b, x); //a+b=c
  assert(matrixeql(3, x, c)==true);
  matrix_add(3, a, e, y); //a+e=g
  assert(matrixeql(3, y, g)==true);

  negate_row(3, 0, ptr_a); //a negate first row = h
  assert(mateqlptr(3, ptr_h, ptr_a)==true);
  negate_row(3,2,ptr_d);  //d negate last row = i
  assert(mateqlptr(3, ptr_i, ptr_d)==true);

  negate_column(3, 0, b); //b negate first column = f
  assert(matrixeql(3, b, f)==true);
  negate_column(3, 1, e); //e negate middle column = c
  assert(matrixeql(3, e, j)==true);



  printf("All tests passed successfully.\n");
}
