//Sartaj Sidhu 110039107
//1+1+0+0+3+9+1+0+7 = 22
// 22/3 = 1 therefore must be second child process or (child 1)
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

int main(){
    int pid = fork();
    int pid2;
    //child 0
    if(pid==0){
        sleep(3);
    printf("Child 0 PID is: %d, PPID is: %d\n",getpid(),getppid());
    }
    else{
        pid = fork();
        //child 1
        if(pid==0){
            int exitNum;
            wait(&exitNum);
            exitNum = exitNum >> 8;
            if(exitNum == 50){
                printf("proper exit\n");
            }
            pid2 = fork();
            if(pid2==0){
            printf("Child child PID is: %d, PPID is: %d\n",getpid(),getppid());
                exit(50);
            
            }

            sleep(2);
        printf("Child 1 PID is: %d, PPID is: %d\n",getpid(),getppid());
        }
        else{
            pid = fork();
            //child 2
            if(pid==0){
        printf("Child 2 PID is: %d, PPID is: %d\n",getpid(),getppid());
            }
            else{
                sleep(3);
            }
        }
    }
}
