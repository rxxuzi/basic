#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void){
    pid_t pid = fork();
    switch (pid){
    case 0:
        printf("This is Child Process : pid=%d\n ", getpid());
        pid_t pid2 = fork();

        switch (pid2){
        case 0:
            printf("This is Grand Child Process : pid = %d\n",getpid());
            break;
        default:
            printf("This is Child Process : pid2 = %d\n",getpid());
            break;
        }


        break;
    case -1:
        printf("fork failed");
    default:
        printf("This is Parent Process : pid = %d\n" , getpid());
        break;
    }
    return 0;

}