/* 
Welcome to my Command-Line Calculator (CLC)
Developer: Sartaj Sidhu
Version: 1
Date: 2020-10-19
*/
#include <stdio.h>

int main(void) {

	// declaring all variables

	char item;
	char op;
	float num1,num2,out;
	
	printf("Welcome to the comand line calculator!\n");
	printf("Select one of the following items:\n");
	printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
	printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
	printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
	printf("V) – Define variables and assign them values.\n");
	printf("E) - Exit\n");

	scanf("%c",&item);		// reads the input item 
	while(item!='E'){			// while loop until the user enters exit
		if(item=='B'){			// checks if the user chose binary
			printf("Please enter the first number\n");
			scanf("%f",&num1);												//gets the first number from the user
			
			printf("Please enter the operation ( + , - , * , P / ):\n");
			scanf(" %c",&op);												//gets the operation from the user
			
			printf("Please enter the second number\n");
			scanf("%f",&num2);												//gets the second number from the user
			
			// here I find out what operation is given from the user and output the answer using the numbers and operation
			
			if(op=='+'){			//check operation						
				out = num1+num2;	//compute output
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
				out=num1/num2;		//compute outpu
				printf("The result is:%f\n",out);	//print output
			}

			// once the output is given I print the list of items again and read the new item
			printf("Please select your option ( B , U , A , E , V )\n");
			scanf(" %c",&item);
		}
		
		// if the item isnt binary it tells the user it cant do that yet and reads a new item
		
		else{
			printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
			printf("Please select your option ( B , U , A , E , V )\n");
			scanf(" %c",&item);
		}
	}
	// user has entered exit and the loop has ended
	// give good bye message
	printf("Thankyou for using the comand line calculator!\n");
}//end 