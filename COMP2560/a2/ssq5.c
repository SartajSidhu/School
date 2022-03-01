#include <stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include <stdlib.h>
void childFunction(char*line);
int main(int argc, char *argv[]){
    char start[]="This program makes simple arithmetics\n";
    char enter[]="Enter an arithmatic statement i.e 34 + 132>\n";
    char create[]="Created a child to make your operation, waiting\n";
    char inp[100];
    write(1,start,sizeof(start)-1);
    while(1){
        fflush(stdin);
        fflush(stdout);
        write(1,enter,sizeof(enter)-1);
        read(0,inp,sizeof(inp)-1);
        pid_t pid = fork();
        if(pid){
            int exitNum;
            write(1,create,sizeof(create)-1);
            wait(&exitNum);
            exitNum = exitNum >> 8;
            if(exitNum == 50) {
                printf("%s\n", "Wrong Statement");
            } 
            else if(exitNum == 100) {
                printf("%s\n", "Division by Zero");
            }
            else if(exitNum == 200) {
                printf("%s\n", "Wrong Operator");
            }
        }
        else{
            childFunction(inp);
        }
    }
    return 0;
}
void childFunction(char*line){
    char work[]="I am a child working for my parent\n";
    int n1,n2;
    char op;
    char out[100];
    write(1,work,sizeof(work)-1);
    int scanned = sscanf(line,"%d %c %d", &n1,&op,&n2);
    if(scanned !=3){
        exit(50);
    }
    else{
        if(op=='+'){
            sprintf(out, "Result = %d", n1 + n2); 
        }
        else if(op == '-'){
            sprintf(out, "Result = %d", n1 - n2);
        }
        else if(op == '*'){
            sprintf(out, "Result = %d", n1 * n2);
        }
        else if(op == '/'){
            if(n2 == 0){
                exit(100);
            }
            sprintf(out, "Result = %d", n1 - n2);
        }
        else{
            exit(200);
        }
    }
    printf("%s\n", out);
    exit(0);
}

