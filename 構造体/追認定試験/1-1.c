#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){
    int pid = 0;
    int x = 0; 
    char p[100];
    FILE *fp = NULL;
    fp = fopen("data.txt" , "w");
    fprintf(fp , "check");
    fclose(fp);
    pid = fork();
    if (pid == 0)
    {
        sleep(3);
        fp = fopen("data.txt" , "w");
        fprintf(fp, "fork");
        fclose(fp);
        fp = fopen("data.txt" , "r");
        fscanf(fp, "%s ", p);
        printf("%s",p);
        fclose(fp);
    }else if(pid < 0){
        exit(1);
    }else{
        fp = fopen("data.txt" , "r");
        fscanf(fp , "%s" , p);
        printf("%s", p);
        fclose(fp);
    }
    return 0;
}