/* ===========================================================================
COMP-1410 Assignment 2
==============================================================================
Student name: Sartaj Singh Sidhu

Replace the error with statement citing any sources of outside help: no help
ERROR_NO_INTEGRITY_STATEMENT

=========================================================================== */

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

void printmat(const char m[6][7]){
  printf("\n");
  for(int i=0;i<6;i++){
    for(int j=0; j<7;j++)
      printf("%c",m[i][j]);
    printf("\n");
  }
  printf("\n");
}
// make_move(board, column, player) updates the board following a move
//   by the given player in the given column; returns false if the move
//   was illegal because the column was full
// requires: 0 <= column < 7
//           player is either 'X' or 'O'
bool make_move(char board[6][7], int column, char player){
	for( int i = 5;i>=0;i--){
		if(board[i][column]=='.'){
			board[i][column]=player;
			return true;
		}
	}
	return false;
}
bool check_h(char board[6][7],char player){
	int win=0;
	for(int i=0;i<6;i++){
		for(int j=0;j<4;j++){
			for(int k=j;k<j+4;k++){
				if(board[i][k]==player){
					win+=1;
				}
			}														// horizontal
			if(win==4){
				return true;
			}
			win=0;
		}
	}
	return false;
}

bool check_v(char board[6][7],char player){
	int win=0;
	for(int i=0;i<7;i++){
		for(int j=0;j<3;j++){
			for(int k=j;k<j+4;k++){
				if(board[k][i]==player){
					win+=1;
				}
			}
			if(win==4){										//vert
				return true;
			}
			win=0;
		}
	}
	return false;
}

bool check_d(char board[6][7],char player){

	int dwin;
	int dwin2;

	for(int j=0;j<3;j++){
		for(int k=j;k<j+4;k++){
			if(board[k][k]==player){
				dwin+=1;
			}
			if(board[k][k+1]==player){				// checks these diagnols
				dwin2+=1;
			}										// xo.....
													// .xo....
		}											// ..xo...
		if(dwin==4){								// ...xo..
			return true;							// ....xo.
		}											// .....xo
		if(dwin2==4){
			return true;
		}
		dwin=0;dwin2=0;
	}

	for(int j=0;j<2;j++){
		for(int k=j;k<j+4;k++){
			if(board[k][k+2]==player){
				dwin+=1;							// checks these diagnols
			}
			if(board[k+1][k]==player){				// ..o....
				dwin2+=1;							// x..o...
			}										// .x..o..
		}											// ..x..o.					
		if(dwin==4){								// ...x..o
			return true;							// ....x..
		}
		if(dwin2==4){
			return true;
		}
		dwin=0;dwin2=0;
	}

	if(board[0][3]==player && board[1][4]==player && board[2][5]==player && board[3][6]==player){
		return true;
	}
	if(board[2][0]==player && board[3][1]==player && board[4][2]==player && board[5][3]==player){
		return true;
	}

	for(int j=6;j>3;j--){
		int x=6-j;
		for(int k=j;k>j-4;k--){
			if(board[x][k]==player){
				dwin+=1;
			}
			if(board[x][k-1]==player){
				dwin2+=1;							// checks these
			}	
			x++;									// .....xo
		}											// ....xo.		
		if(dwin==4){								// ...xo..
			return true;							// ..xo...	
		}											// .xo....
		if(dwin2==4){								// xo.....
			return true;
		}
		dwin=0;dwin2=0;
	}

	for(int j=6;j>4;j--){
		int x=6-(j-1);
		for(int k=j;k>j-4;k--){
			if(board[x][k]==player){	//checks this
				dwin+=1;							// ....x..
			}										// ...x...
			x++;									// ..x....
		}											// .x.....
		if(dwin==4){								// x......
			return true;							// .......
		}
		dwin=0;
	}									//checks this
	for(int j=4;j>2;j--){							// .......
		int x=4-(j-1);								// ......o
		for(int k=j;k>j-4;k--){						// .....o.
			if(board[x][k]==player){				// ....o..
				dwin+=1;							// ...o...
			}										// ..o....
			x++;										
		}
		if(dwin==4){
			return true;
		}
		dwin=0;
	}

	if(board[3][0]==player && board[2][1]==player && board[1][2]==player && board[0][3]==player){
		return true;
	}
	if(board[6][3]==player && board[5][4]==player && board[4][5]==player && board[3][6]==player){
		return true;
	}
	return false;
}

// check_win(board) returns true if the given player has 4 connected
//   pieces on the board
bool check_win(char board[6][7], char player){
	if(check_h(board,player)==false && check_v(board,player)==false && check_d(board,player)==false){
		return false;
	}
	else{
		return true;
	}
}
	



// first_capital(str, n) returns the first capital letter in str;
//   returns 0 if str contains no capital letters
// requires: str is a string of length n
//           str contains only lower-case and upper-case letters
//           all lower-case letters appear before upper-case letters
char first_capital(const char str[], int n){
	int l = 0; // lower 
	int h = n-1; // higher

	while(l<=h){
		int mp = (l+h)/2; // midpoint
		if(mp==0 && isupper(str[mp])){
			return str[mp];
		}
		if(isupper(str[mp]) && islower(str[mp-1])){
      		return str[mp];
    	}
    	else if(islower(str[mp])){
      		l = mp+1;
    	}
    	else{
      		h = mp-1;
    	} 
	}
	return 0;
}

// deepest_substring(str, out) updates out to be the deepest substring of
//   str; the first is used if multiple possibilities exist
// requires:
//   str is a string with balanced parenthesis
//   out points to enough memory to store the deepest substring of str
void deepest_substring(const char str[], char out[]){
	int n =strlen(str);
	//char *s=&str;
	int count =0;
	int max = -1;
	for(int i=0;i<n;i++){
		if(str[i]=='('){
			count+=1;
		}
		if(str[i]==')'){
			count-=1;
			for(int j=i;j>=0;j--){
				if(str[j]=='(' && count>max){
					max = count;
					strncpy(out,str+j+1,i-j-1);

				}
			}
		}
	}
}

int main(void) {
    // Some given tests

	char fp1[]="sartaj";
	char fp2[]="sarTAJ";
	char fp3[]="sartaJ";
	char fp4[]="SARTAJ";
	char fp5[]="X";

	assert(first_capital(fp1,6)==0);
	assert(first_capital(fp2,6)=='T');
	assert(first_capital(fp3,6)=='J');
	assert(first_capital(fp4,6)=='S');
	assert(first_capital(fp5,1)=='X');


    char ds1[]="(a+b+(a+c)+b)";
    char ds2[]="(a+b+(a+b)+(a+c+(a+x+g)+a)+b)";
    char ds3[]="(b+a+(x+y)+x)+(b+x)";
    char ds4[]="a(b(c(d)e)f)g";
    char ds5[]="(x)";

    char ans1[]="a+c";
    char ans2[]="a+x+g";
    char ans3[]="x+y";
    char ans4[]="d";
    char ans5[]="x";
    
    char out1[20];
    char out2[20];
    char out3[20];
    char out4[20];
    char out5[20];

    deepest_substring(ds1,out1);
    assert(strcmp(out1,ans1)==0);

    deepest_substring(ds2,out2);
    assert(strcmp(out2,ans2)==0);

    deepest_substring(ds3,out3);
    assert(strcmp(out3,ans3)==0);
    
    deepest_substring(ds4,out4);
    assert(strcmp(out4,ans4)==0);
    
    deepest_substring(ds5,out5);
    assert(strcmp(out5,ans5)==0);

    char t1[6][7] =   {"X......",
                       "X......",
                       "X......",
                       "X......",
                       "OO.....",
                       "OO....."};
    assert(check_win(t1,'X')==true);                   
    
    char t2[6][7] =   {".......",
                       ".......",
                       "...O...",
                       "..OX...",
                       "XOXO...",
                       "OXXX..."};
    assert(check_win(t2,'O')==true);

    char t3[6][7] =   {".......",
                       ".......",
                       ".......",
                       ".......",
                       "OOO....",
                       "XXXX..."};
    assert(check_win(t3,'X')==true);

    char t4[6][7] =   {".......",
                       ".......",
                       "X......",
                       "XO.....",
                       "XO.....",
                       "XO....."};
    assert(check_win(t4,'X')==true);   
                    
    char t5[6][7] =   {"OX.....",
                       "XO.....",
                       "OOO....",
                       "XXXO...",
                       "OOOX...",
                       "XXXO..X"};                                                         
    assert(check_win(t5,'O')==true);

    printf("All tests passed\n\n");


    bool check = false;
	int pcheck = 1;
	int col = 0;
	char gb[6][7] =   {".......",
                       ".......",
                       ".......",
                       ".......",
                       ".......",
                       "......."};
	printf("Welcome to my connect 4.\nThe X player will always start first.\nYou have to choose between comlumns 0-6.\n");
	printf(".......\n.......\n.......\n.......\n.......\n.......\n0123456\n");
	while(check!=true){
		if(pcheck%2!=0){
			printf("X player please enter what column you would like to put your piece (0-6): ");
		}
		if(pcheck%2==0){
			printf("O player please enter what column you would like to put your piece (0-6): ");
		}
		while(1){
			if (scanf (" %d", &col)){
				if(col>=0 && col<=6){
					break;	
				}
				else{
					printf("That is an invalid input the game will now end.\n");
					check = true;
					break;
				}	
			}
			else{
				printf("That is an invalid input the game will now end.\n");
				check = true;
				break;
			}
		}
		if(check==true){
			break;
		}

		if(pcheck%2!=0){
			if(make_move(gb,col,'X')==false){
				printf("That column is already full, please enter a new column.\n");
				continue;	
			}
			else{
				printmat(gb);
				if(check_win(gb,'X')==true){
					printf("Congratulations the X player has won.\n");
					break;
				}
				pcheck++;
			}
		}
		else if(pcheck%2==0){
			if(make_move(gb,col,'O')==false){
				printf("That column is already full, please enter a new column.\n");
				continue;	
			}
			else{
				printmat(gb);
				if(check_win(gb,'O')==true){
					printf("Congratulations the O player has won!\n");
					break;
				}
				pcheck++;
			}
		}

	}  
}


