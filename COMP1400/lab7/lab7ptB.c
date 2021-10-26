/*Guess game
  Sartaj Sidhu
  2020/11/13*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  
  srand(time(NULL)); //srand helps generate a random seed for the number
  int goal = rand() % 50 + 1; //random number between 1-50 inclusive
  int i,g; //loop and input variable
  // welcome message
  printf("Welcome to the guess game you have 10 attempts to try and guess the correct number from 1 to 50\n");
  
  // loop 10 times for each guess
  for(i=0;i<10;i++){
    // retrieve the guess
    printf("Take a guess: ");
    scanf("%d", &g);
    
    //check if the number is higher lower or correct
    if(g>goal){
      printf("Sorry thats too high\n");
    }
    else if(g<goal){
      printf("Sorry thats too low\n");
    }
    else if(g==goal){
      printf("Correct, the number was indeed %d",g);
      break; // end loop if user correct
    }
  }
  // check if user has used to many attempts and still hasnt gotten the correct number
  if(i==10 && g!=goal){
    printf("Unforunately you have used up all of your guesses, the correct number was: %d",goal);
  }
}