#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main(void){
    pid_t pid = fork();
    switch (pid){
    case 0:
        fprintf(stdout,"Child Process. \t pid = %d.\t my ppid = %d\n" , getpid(), getppid());
        break;
    
    case -1 :
        fprintf(stderr , "fork failed .\n");
        break;
    default:
        fprintf(stderr, "Parent Process. \t pod = %d \t my ppid = %d\n" , getpid() , getppid());
        break;
    }
    return 0;
}