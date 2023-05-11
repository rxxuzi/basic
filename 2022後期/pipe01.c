#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int fd[2];
/*pipe関数は、fd[0]に読み取り用のエンドポイント、
*fd[1]に書き込み用のエンドポイントが格納される*/
void parent(){
    int status;
    char *p = "Hello Kid";
    printf("this is parent process,\n");
    close(fd[0]);
    /*pipeに文字を一文字ずつ入力(送信)していく*/

    while(*p){
        /*変数pはchar型なので4byte*/
        if (write(fd[1],p,1) < 0)
        {
            perror("Write");
            exit(1);
        }
        p++;
        
    }
    close(fd[1]);
    if(wait(&status) < 0){
        perror("wait");
        exit(1);
    }
}
//子プロセスでしたいこと実行
void child(){
    int i , c;
    printf("This is child process.\n");
    close(fd[1]);
    /*pipeから送られてきたデータを受信、そしてchar型にしている*/
    while((i = read(fd[0],&c,1)) > 0){
        putchar(c);
    }
    putchar('\n');
    close(fd[0]);
}
int main(void){
    int pid;
    printf("char byte : %d\n",sizeof(char));
    printf("int  byte : %d\n",sizeof(int));
    if(pipe(fd) < 0){
        perror("pipe");
        exit(1);
    }
    /*マルチプロセス化とtry catchを兼ねている*/
    if((pid = fork()) < 0){
        perror("fork");
        exit(1);
    }
    /*childとparentを実行*/
    if(pid){
        parent();
    }else{
        child();
    }
    return 0;
}