#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void childFunction(char *line);

int main(int argc, char const *argv[])
{
        printf("This Program makes simple arithmetics.\n\n");

        while(1) 
        {
                char input[50];
                fflush(stdin);
                fflush(stdout);

                printf("Enter an arithmetic statement (eg. 34 + 132) > ");
                scanf("%[^\n]s", &input[0]);

                pid_t pid = fork();

                if(pid) // Parent Process
                {
                        int status;

                        printf("Created a child to make your operation, waiting\n");
                        wait(&status);

                        status = status >> 8;
                        if(status == 50) {
                                printf("%s\n", "Wrong Statement");
                        } 
                        else if(status == 100) {
                                printf("%s\n", "Division by Zero");
                        }
                        else if(status == 200) {
                                printf("%s\n", "Wrong Operator");
                        }
                }
                else // Child Process
                {
                        childFunction(input);
                }
                break;
        }

        return 0;
}

void childFunction(char *line) {
        int a, b;
        char op;
        char output[100];

        int x = sscanf(line, "%d %c %d", &a, &op, &b);

        if(x != 3) {
                exit(50);
        }

        switch(op) {
                case '+':
                        sprintf(output, "Result : %d %c %d = %d\n", a, op, b, a + b);
                        break;
                case '-':
                        sprintf(output, "Result : %d %c %d = %d\n", a, op, b, a - b);
                        break;
                case '*':
                        sprintf(output, "Result : %d %c %d = %d\n", a, op, b, a * b);
                        break;
                case '/':
                        if(b == 0) {
                                exit(100);
                        }
                        sprintf(output, "Result : %d %c %d = %d\n", a, op, b, a / b);
                        break;
                case '%':
                        if(b == 0) {
                                exit(100);
                        }
                        sprintf(output, "Result : %d %c %d = %d\n", a, op, b, a + b);
                        break;
                default:
                        exit(200);
                        break;
        }

        printf("%s\n", output);
        exit(0);
}