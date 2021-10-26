/* 
Welcome to my Command-Line Calculator (CLC)
Developer: Sartaj Sidhu
Version: 3
Date: 2020-12-06
*/
#include <math.h>
#include <stdio.h>
#include <string.h>

float binary(float n1,float n2,char op);
float unary(float n1,char op);
void variable();
void varuse();
void memcheck();
void clear();
void options();

char var,item,aitem,memitem,op,choice; 
float vals[5]={0,0,0,0,0}; //varaible values 
float memory[100];
char goodinput[]="abcde"; //varaible names
float num1,num2,out,val;
int memloc,userloc;

int main(void) {
  printf("Welcome to the comand line calculator!\n");
  printf("Select one of the following items:\n");
  printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
  printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
  printf("V) – Define variables and assign them values.\n");
  printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
  printf("M) - Memory check, displays a specific value in memory or all values.\n");
  printf("R) - Resets the memory, clearing all previous values.\n");
  printf("E) - Exit\n");

  while(item!='E'){
    options();
    if(item=='B'){ 
      printf("The result is: %f\n",binary(num1,num2,op)); //prints result
    }    
    if (item=='U'){
      printf("The result is: %f\n",unary(num1,op)); //prints result 
    }
    if(item=='V'){
      variable(); 
    } 
    if (item=='A'){
      varuse();
    }
    if(item=='M'){
      memcheck();
    }
    if(item=='R'){
      clear();
    }       
    if (item=='E'){
      break; // exits loop
    }
  }
  printf("Thankyou for using my command line calculator!\n"); //prints goodbye message
}
// binary function
float binary(float n1,float n2,char op){
  printf("Please enter the first number: ");
        // loop until correct input is given
  while (1) {
    if (scanf (" %f", &n1))
      break;
    while (getchar() != '\n');
    printf ("Invalid, please try again: ");
  }

  printf("Please enter the operation ( + , - , * , / , % , P , X , I ): ");
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
    
  printf("Please enter the second number: ");
        // loop until correct input is given
  while (1) {
    if (scanf (" %f", &n2))
      break;
    while (getchar() != '\n');
    printf ("Invalid, please try again: ");
  }
        
        // here I find out what operation is given from the user and output the answer using the numbers and operation
        
  if(op=='+'){      //check operation           
    out = (n1+n2);
    memory[memloc]=out; memloc+=1;  //compute output
    return out;  
  }
  else if(op=='-'){   //check operation 
    out = n1-n2; 
    memory[memloc]=out; memloc+=1; //compute outpu
    return out;
  }
  else if(op=='*'){   //check operation 
    out=n1*n2;  
    memory[memloc]=out; memloc+=1;  //compute outpu
    return out;
  }
  else if(op=='/'){   //check operation
        // loop until correct input is given
    while(n2==0){
      printf("Sorry I cannot perform this. please enter a new number: ");
      while (1) {
        if (scanf (" %f", &n2))
          break;
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
      }
    } 
    out=n1/n2; 
    memory[memloc]=out; memloc+=1;   //compute outpu
    return out;
  }
  else if(op=='%'){     //check operation           
    out = fmod(n1,n2); 
    memory[memloc]=out; memloc+=1; //compute output
    return out;
        
  }
  else if(op=='P'){     //check operation           
    out = pow(n1,n2);
    memory[memloc]=out; memloc+=1; //compute output
    return out;                 
  }
  else if(op=='X'){     //check operation           
    if(n1>n2){
      out = n1;
    }               //compute output
    else{
      out=n2;
    }
    memory[memloc]=out; memloc+=1;
    return out;                
  }
  else if(op=='I'){     //check operation           
    if(n1<n2){
      out = n1;
    }               //compute output
    else{
      out=n2;
    }
    memory[memloc]=out; memloc+=1;
    return out;           
  } 
}
// unary function
float unary(float n1,char op){
  printf("Please enter a number: ");
        // loop until correct input is given
  while (1) {
    if (scanf (" %f", &n1))
      break;
    while (getchar() != '\n');
    printf ("Invalid, please try again: ");
  }

  printf("Please enter the operation ( S , L , E , C , F ): ");
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
    while(n1<0){
      printf("Sorry I cannot perform this. please enter a new number: ");
            // loop until correct input is given
      while (1) {
        if (scanf (" %f", &n1))
          break;
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
      }
    }
    out = sqrt(n1); //compute output
    memory[memloc]=out; memloc+=1;
    return out;         
  }     //check operation           
  else if(op=='L'){
    while(n1<0){
      printf("Sorry that is an invalid input. please enter a new number: ");
      // loop until correct input is given
      while (1) {
      if (scanf (" %f", &n1))
        break;
      while (getchar() != '\n');
      printf ("Invalid, please try again: ");
      }
    }
    out=log(n1);
    memory[memloc]=out; memloc+=1;
    return out;
  }
  else if(op=='E'){
    out=exp(n1);
    memory[memloc]=out; memloc+=1;
    return out;
  }
  else if(op=='C'){
    out=ceil(n1);
    memory[memloc]=out; memloc+=1;
    return out;
  }
  else if(op=='F'){
    out=floor(n1);
    memory[memloc]=out; memloc+=1;
    return out;
  }
}

void variable(){
  printf("Please enter a letter from a-e as a variable name: ");
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
    if (scanf (" %f", &val))
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
}

void varuse(){
  while(aitem!='E'){
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
      printf("Please enter x or n; x if you would like to use a variable or n if you would like to input a number: ");
      // loop until correct input is given
      while (1) {
        if (scanf (" %c", &choice)){
          if(choice=='x'||choice=='n'){
            break;
          }    
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }  
      }

      if(choice=='x'){ // user chose to enter num
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
      else if(choice=='n'){ //user chose to enter num
        printf("Please enter the first number: "); 
        // loop until correct input is given
        while (1) {
          if (scanf (" %f", &num1))
            break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
        }
      }

      printf("Please enter the operation ( + , - , * , / , % , P , X , I ): ");
      while(1){
        if(scanf(" %c",&op)){
          if(op=='+'||op=='-'||op=='*'||op=='/'||op=='%'||op=='P'||op=='X'||op=='I'){
            break;
          }
        while (getchar() != '\n');
        printf("Invalid, please try again: ");
        } 
      }

      printf("Please enter x or n; x if you would like to use a variable or n if you would like to input a number: ");
      // loop until correct input is given
      while (1) {
        if (scanf (" %c", &choice)){
          if(choice=='x'||choice=='n'){
            break;
          }     
        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }  
      }

      if(choice=='x'){ //user chose to enter variable
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
      else if(choice=='n'){ // if user chooses to enter number
        printf("Please enter the second number: ");
        // loop until correct input is given
        while (1) {
        if (scanf (" %f", &num2))
          break;

        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }
      }

      if(op=='+'){      //check operation           
        out = (num1+num2);  //compute output
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output         
      }
      else if(op=='-'){   //check operation 
        out = num1-num2;  //compute outpu
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output    
      }
      else if(op=='*'){   //check operation 
        out=num1*num2;    //compute outpu
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output  
      }
      else if(op=='/'){   //check operation
      // loop until correct input is given
        while(num2==0){
          printf("Sorry I cannot perform this. please enter a new number: ");
          while (1) {
            if (scanf (" %f", &num2))
              break;

            while (getchar() != '\n');
            printf ("Invalid, please try again: ");
          }
        } 
        out=num1/num2;    //compute outpup
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output
      }
      else if(op=='%'){     //check operation           
        out = fmod(num1,num2);  //compute output
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output         
      }
      else if(op=='P'){     //check operation           
        out = pow(num1,num2); //compute output
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output         
      }
      else if(op=='X'){     //check operation           
        if(num1>num2){
          out = num1;
        }               //compute output
        else{
          out=num2;
        }
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output         
      }
      else if(op=='I'){     //check operation           
        if(num1<num2){
          out = num1;
        }               //compute output
        else{
          out=num2;
        }
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);  //print output         
      }
    }
    else if(aitem=='U'){
      printf("Please enter x or n; x if you would like to use a variable or n if you would like to input a number: ");
     // loop until correct input is given
      while (1) {
      if (scanf (" %c", &choice)){
        if(choice=='x'||choice=='n'){
          break;
        }     
      while (getchar() != '\n');
      printf ("Invalid, please try again: ");
        }  
      }

      if(choice=='x'){ // user has chose to enter a variable
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
      else if(choice=='n'){ //if user has chosen to enter a number
        // loop until correct input is given
        printf("Please enter the first number: "); 
        while (1) {
        if (scanf (" %f", &num1))
          break;

        while (getchar() != '\n');
        printf ("Invalid, please try again: ");
        }
      }
      printf("Please enter the operation ( S , L , E , C , F ): ");
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
          if (scanf (" %f", &num1))
          break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
          }
        }
        out = sqrt(num1); //compute output
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);
        }     //check operation           

      else if(op=='L'){
        while(num1<0){
          printf("Sorry that is an invalid input. please enter a new number: ");
          while (1) {
          if (scanf (" %f", &num1))
          break;

          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
          }
        }
        out=log(num1);
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);
      }
      else if(op=='E'){
        out=exp(num1);
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);
      }
      else if(op=='C'){
        out=ceil(num1);
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);
      }
      else if(op=='F'){
        out=floor(num1);
        memory[memloc]=out; memloc+=1;
        printf("The result is: %f\n",out);
      }
    }
  }
}
// displays all options for user and gets a correct input
void options(){
  printf("Please select your option ( B , U , V , A , M , R , E ): ");
    // loop until correct input is given
  while(1){
    if(scanf(" %c",&item)){
      if(item=='B'||item=='U'||item=='A'||item=='V'||item=='E'||item=='R'||item=='M'){
          break;
      }
      while (getchar() != '\n');
      printf("Invalid, please try again: ");
    } 
  }
}
void clear(){
  for(int i=0;i<memloc;i++){ //loops through mem and sets everything to 0
    memory[i]=0;
  }
  memloc=0;
  printf("Memory has been cleared!\n");
}

void memcheck(){
  if(memloc==0){
    printf("There is currently nothing in memory\n");
  }
  else{
    printf("(I): an item in memory\n (0): a list of all items in memory\n (E): Exit to the main menu");
    while (memitem!='E'){
      printf("Please enter (I , 0 , or E): ");
      while(1){
        if(scanf(" %c",&memitem)){
          if(memitem=='I'||memitem=='0'||memitem=='E'){
            break;
          }
          while (getchar() != '\n');
          printf("Invalid, please try again: ");
        } 
      }
      if(memitem=='I'){
        printf("Enter a number between 1 and %d: ",memloc);
        while (1) {
          if (scanf (" %d", &userloc))
            if(userloc>0)
              break;
          while (getchar() != '\n');
          printf ("Invalid, please try again: ");
        }
        printf("%f",memory[userloc-1]); //prints number from mem user wants
      }
      else if(memitem=='0'){
        for(int i=0;i<memloc-1;i++){
          printf("%f, ",memory[i]); //prints list of all nums in mem
        }
        printf("%f",memory[memloc]); //prints last num in mem
      }
      else if(memitem=='E'){
        break; //exits loop
      }
    }
  }
}