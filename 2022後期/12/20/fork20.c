#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include 
int main(void){
    pid_t result_pid;
    result_pid = fork();
    fprintf(stdout, "fork done \n");
    switch (result_pid){
    case 0: fprintf(stdout,"child process.\t pid = %d.\t my ppid = %d\n",getpid(),getppid());
        break;
    case -1 : fprintf(stderr,"fork failed.\n");
        break;
    default:fprintf(stdout,"parent process.\t pid = %d.\t my ppid = %d\n",getpid(),getppid());
        break;
    }
    return 0;
}