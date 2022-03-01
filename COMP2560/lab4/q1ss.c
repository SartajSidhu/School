#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    if(fork()==0){
        sleep(3);
    printf("PID: is %d, PPID: is : %d\n",getpid(),getppid());
    }
    else{
        if(fork()==0){
            sleep(2);
        printf("PID: is %d, PPID: is : %d\n",getpid(),getppid());
        }
        else{
            if(fork()==0){
                sleep(3);
        printf("PID: is %d, PPID: is : %d\n",getpid(),getppid());
            }
            else{
                sleep(3);
            }
        }
    }
}
