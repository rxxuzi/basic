/*ひ孫プロセスまで作成して1~50までの和を出す*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void){
    int sum , pid , status;
    FILE *fp ;
    pid = fork();
    int i; int getnum;
    switch (pid)
    {
    case -1:
        printf("ERORR");
        break;
    case 0 : 
        for(sum = 0 , i = 51 ; i <= 100 ; i++ ){
            sum += i;
        }
        fp = fopen("tmpDATA.txt", "w");
        if(fp == NULL){
            fprintf(stderr, "FAILED\n");
            return EXIT_FAILURE;
        }
        fprintf(fp, "%d", sum);
        fclose(fp);
        break;
    default:
        for(sum = 0 , i = 0 ; i < 100; i ++){
            sum += i;
        }
        wait(&status);
        usleep(1);
        fp = fopen("tmpDATA" , "r");
        getnum = 0;
        fscanf(fp , "%d" , &getnum);
        sum += getnum;
        printf("sum of 1 ~ 100 : %d", sum);
        fclose(fp);
        break;
    }
    return 0;
}