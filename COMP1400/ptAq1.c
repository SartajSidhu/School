#include<stdio.h>
int main()
{
	char plaintext[100], curl; //string that can be 100 chars long
	int key;

	printf("Enter a message to encrypt: ");
	scanf("%99s",plaintext); //reads msg
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(int i = 0; plaintext[i] != '\0'; ++i){ //until it doesnt become null
		curl = plaintext[i]; // gets  current letter

		if(curl >= 'a' && curl <= 'z'){
			curl = curl + key; // adds to char value to cur letter
			if(curl > 'z'){
				curl = curl - 'z' + 'a' - 1; // or sbutracts it
			}
			plaintext[i] = curl;
		} //for capital letters
		else if(curl >= 'A' && curl <= 'Z'){ 
			curl = curl + key;
			if(curl > 'Z'){
				curl = curl - 'Z' + 'A' - 1;
			}
			plaintext[i] = curl;
		}
	}
	printf("Encrypted message: %s", plaintext); //prints new encripted msg 
}