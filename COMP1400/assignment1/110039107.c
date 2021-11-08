/* 
Welcome to my Command-Line Calculator (CLC)
Developer: Sartaj Sidhu
Version: 2
Date: 2020-10-19
*/
#include <math.h>
#include <stdio.h>

#include <string.h>

int main(void) {

	// declaring all variables
  int choice=0;
  char var;
	char item,aitem;
	char op; 
  double vals[5]={0,0,0,0,0}; //varaible values 
  char goodinput[]="abcde"; //varaible names
  char bop[]="+-*/%PXI"; //binary operators
  char uop[]="SLECF";    //unary operators
  int len = strlen(goodinput);
  double num1,num2,out,val;
  
	//welcome message 
	printf("Welcome to the comand line calculator!\n");
	printf("Select one of the following items:\n");
	printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
	printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
	printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
	printf("V) – Define variables and assign them values.\n");
	printf("E) - Exit\n");

			// reads the input item
  while(item!='E'){
    printf("Please select your option ( B , U , A , V , E ): ");
    // loop until correct input is given
		while(1){
        if(scanf(" %c",&item)){
          if(item=='B'||item=='U'||item=='A'||item=='V'||item=='E'){
            break;
          }
        while (getchar() != '\n');
        printf("Invalid, please try again: ");
        } 
      }

   
    while(item!='E'){			// while loop until the user enters exit
      if(item=='B'){			// checks if the user chose binary
        printf("Please enter the first number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %lf", &num1))
          break;
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }

        printf("\nPlease enter the operation ( + , - , * , / , % , P , X , I ): ");
        // loop until correct input is given
        while(1){
          if(scanf(" %c",&op)){
            if(op=='+'||op=='-'||op=='*'||op=='/'||op=='%'||op=='P'||op=='X'||op=='I'){ // check if its correct input
              break;
            }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
          } 
        }
    
        printf("\nPlease enter the second number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %lf", &num2))
          break;

        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }
        
        // here I find out what operation is given from the user and output the answer using the numbers and operation
        
        if(op=='+'){			//check operation						
          out = (num1+num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='-'){		//check operation	
          out = num1-num2;	//compute outpu
          printf("The result is:%f\n",out);	//print output		
        }
        else if(op=='*'){		//check operation	
          out=num1*num2;		//compute outpu
          printf("The result is:%f\n",out);	//print output	
        }
        else if(op=='/'){		//check operation
        // loop until correct input is given
          while(num2==0){
            printf("Sorry I cannot perform this. please enter a new number: ");
            while (1) {
              if (scanf (" %lf", &num2))
                break;

              while (getchar() != '\n');
              printf ("Invalid, please try again: ");
            }
          }	
          out=num1/num2;		//compute outpu
          printf("The result is: %f\n",out);	//print output
        }
        else if(op=='%'){			//check operation						
          out = fmod(num1,num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='P'){			//check operation						
          out = pow(num1,num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='X'){			//check operation						
          if(num1>num2){
            out = num1;
          }	              //compute output
          else{
            out=num2;
            }
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='I'){			//check operation						
          if(num1<num2){
            out = num1;
          }	              //compute output
          else{
            out=num2;
            }
          printf("The result is: %f\n",out);	//print output				 
        }
        break; //end inner loop
      }

      else if(item=='U'){
        printf("Please enter a number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %lf", &num1))
          break;

        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }

        printf("\nPlease enter the operation ( S , L , E , C , F ): ");
        // loop until correct input is given
        while(1){
          if(scanf(" %c",&op)){
            if(op=='S'||op=='L'||op=='E'||op=='C'||op=='F'){
              break;
            }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
          } 
        }
        // all operations
        if(op=='S'){
          while(num1<0){
            printf("Sorry I cannot perform this. please enter a new number: ");
            // loop until correct input is given
            while (1) {
            if (scanf (" %lf", &num1))
            break;
            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
            }
          }
          out = sqrt(num1);	//compute output
          printf("The result is: %f\n",out);
          }			//check operation						

        else if(op=='L'){
          while(num1<0){
            printf("Sorry that is an invalid input. please enter a new number: ");
            // loop until correct input is given
            while (1) {
            if (scanf (" %lf", &num1))
            break;

            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
            }
          }
          out=log(num1);
          printf("The result is: %f\n",out);
        }
        else if(op=='E'){
            out=exp(num1);
            printf("The result is: %f\n",out);
          }
        else if(op=='C'){
            out=ceil(num1);
            printf("The result is: %f\n",out);
          }
        else if(op=='F'){
          out=floor(num1);
          printf("The result is: %f\n",out);
        }
        break; // break inner loop
      }
      else if(item=='V'){
          printf("Please enter a letter from a-e as a variable name: \n");
          // loop until correct input is given
          while(1){
            if(scanf(" %c",&var)){
              if(var=='a'||var=='b'||var=='c'||var=='d'||var=='E'){
                break;
              }
            while (getchar() != '\n');
            printf("Invalid, please try again: ");
            } 
          }
          printf("Please enter a value for %c: ",var);
          // loop until correct input is given
          while (1) {
            if (scanf (" %lf", &val))
            break;

            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
          }
        // put variable in appropiate spot to be used later   
        if(var==goodinput[0]){ // if user enters a val is first
          vals[0]=val;
        }
        else if(var==goodinput[1]){
          vals[1]=val;
        }
        else if(var==goodinput[2]){
          vals[2]=val;
        }
        else if(var==goodinput[3]){
          vals[3]=val;
        }
        else if(var==goodinput[4]){
          vals[4]=val;
        }
        break;
      }
      else if(item=='A'){
        printf("Please select your option (B,U,or E): ");
        // loop until correct input is given
        while(1){
          if(scanf(" %c",&aitem)){
            if(aitem=='B'||aitem=='U'||aitem=='E'){
              break;
            }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
          } 
        }
        if(aitem=='E'){ //if a item is E go back to outer loop
          break;
        }
        else if(aitem=='B'){ // a item is B
          printf("Please enter 0 or 1; 0 if you would like to use a variable or 1 if you would like to input a number: ");
        // loop until correct input is given
          while (1) {
          if (scanf (" %d", &choice)){
            if(choice==0||choice==1){
              break;
            }     
          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
            }  
          }

        if(choice==0){ // user chose to enter num
          printf("Please choose a variable from a-e: ");
          // loop until correct input is given
          while(1){
            if(scanf(" %c",&var)){
              if(var=='a'){
              num1=vals[0];
              break;
            }
            else if(var=='b'){
              num1=vals[1];
              break;
            }
            else if(var=='c'){
              num1=vals[2];
              break;
            }
            else if(var=='d'){
              num1=vals[3];
              break;
            }
            else if(var=='e'){
              num1=vals[4];
              break;
            }
            while (getchar() != '\n');
            printf("Invalid, please try again: ");
            } 
          }
        }
        else if(choice==1){ //user chose to enter num
          printf("Please enter the first number: "); 
          // loop until correct input is given
        while (1) {
          if (scanf (" %lf", &num2))
            break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
          }
        }
          printf("\nPlease enter the operation ( + , - , * , / , % , P , X , I ): ");
          while(1){
          if(scanf(" %c",&op)){
            if(op=='+'||op=='-'||op=='*'||op=='/'||op=='%'||op=='P'||op=='X'||op=='I'){
              break;
            }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
          } 
        }

        printf("Please enter 0 or 1; 0 if you would like to use a variable or 1 if you would like to input a number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %d", &choice)){
          if(choice==0||choice==1){
            break;
          }     
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
          }  
        }

        if(choice==0){ //user chose to enter variable
          printf("Please choose a variable from a-e: ");
          // loop until correct input is given
          while(1){
            if(scanf(" %c",&var)){
              if(var=='a'){
              num2=vals[0];
              break;
            }
            else if(var=='b'){
              num2=vals[1];
              break;
            }
            else if(var=='c'){
              num2=vals[2];
              break;
            }
            else if(var=='d'){
              num2=vals[3];
              break;
            }
            else if(var=='e'){
              num2=vals[4];
              break;
            }
            while (getchar() != '\n');
            printf("Invalid, please try again: ");
            } 
          }
        }
        else if(choice==1){ // if user chooses to enter number
          printf("Please enter the second number: ");
          // loop until correct input is given
          while (1) {
          if (scanf (" %lf", &num2))
            break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
          }
        }

        if(op=='+'){			//check operation						
          out = (num1+num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='-'){		//check operation	
          out = num1-num2;	//compute outpu
          printf("The result is:%f\n",out);	//print output		
        }
        else if(op=='*'){		//check operation	
          out=num1*num2;		//compute outpu
          printf("The result is:%f\n",out);	//print output	
        }
        else if(op=='/'){		//check operation
        // loop until correct input is given
          while(num2==0){
            printf("Sorry I cannot perform this. please enter a new number: ");
            while (1) {
              if (scanf (" %lf", &num2))
                break;

              while (getchar() != '\n');
              printf ("Invalid, please try again: ");
            }
          }	
          out=num1/num2;		//compute outpup
          printf("The result is: %f\n",out);	//print output
        }
        else if(op=='%'){			//check operation						
          out = fmod(num1,num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='P'){			//check operation						
          out = pow(num1,num2);	//compute output
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='X'){			//check operation						
          if(num1>num2){
            out = num1;
          }	              //compute output
          else{
            out=num2;
            }
          printf("The result is: %f\n",out);	//print output				 
        }
        else if(op=='I'){			//check operation						
          if(num1<num2){
            out = num1;
          }	              //compute output
          else{
            out=num2;
            }
          printf("The result is: %f\n",out);	//print output				 
        }
        break;  //exit inner loop
          

        }
        // check if a item is U
        else if(aitem=='U'){
          printf("Please enter 0 or 1; 0 if you would like to use a variable or 1 if you would like to input a number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %d", &choice)){
          if(choice==0||choice==1){
            break;
          }     
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
          }  
        }

        if(choice==0){ // user has chose to enter a variable
          printf("Please choose a variable from a-e: ");
          // loop until correct input is given
          while(1){
            if(scanf(" %c",&var)){
              if(var=='a'){
              num1=vals[0]; //set num1 equal to variable
              break;
            }
            else if(var=='b'){
              num1=vals[1];//set num1 equal to variable
              break;
            }
            else if(var=='c'){
              num1=vals[2];//set num1 equal to variable
              break;
            }
            else if(var=='d'){
              num1=vals[3];//set num1 equal to variable
              break;
            }
            else if(var=='e'){
              num1=vals[4];//set num1 equal to variable
              break;
            }
            while (getchar() != '\n');
            printf("Invalid, please try again: ");
            } 
          }
        }
        else if(choice==1){ //if user has chosen to enter a number
          // loop until correct input is given
          printf("Please enter the first number: "); 
          while (1) {
          if (scanf (" %lf", &num2))
            break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
          }
        }
        printf("\nPlease enter the operation ( S , L , E , C , F ): ");
        // loop until correct input is given
        while(1){
          if(scanf(" %c",&op)){
            if(op=='S'||op=='L'||op=='E'||op=='C'||op=='F'){
              break;
            }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
          } 
        }
        // all seprate operations 
        if(op=='S'){
          while(num1<0){
            printf("Sorry I cannot perform this. please enter a new number: "); 
            // loop until correct input is given
            while (1) {                       
            if (scanf (" %lf", &num1))
            break;

            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
            }
          }
          out = sqrt(num1);	//compute output
          printf("The result is: %f\n",out);
          }			//check operation						

        else if(op=='L'){
          while(num1<0){
            printf("Sorry that is an invalid input. please enter a new number: ");
            while (1) {
            if (scanf (" %lf", &num1))
            break;

            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
            }
          }
          out=log(num1);
          printf("The result is: %f\n",out);
        }
        else if(op=='E'){
            out=exp(num1);
            printf("The result is: %f\n",out);
          }
        else if(op=='C'){
            out=ceil(num1);
            printf("The result is: %f\n",out);
          }
        else if(op=='F'){
          out=floor(num1);
          printf("The result is: %f\n",out);
        }
        break; //ends inner loop 
        }
      }
    }
    // inner loop has been broken and user is now choosing what to do
  }
  printf("Thankyou for using the comand line calculator!\n"); //outer loop was broken and user has exited
}//end 