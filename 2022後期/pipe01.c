#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int fd[2];
/*pipe�֐��́Afd[0]�ɓǂݎ��p�̃G���h�|�C���g�A
*fd[1]�ɏ������ݗp�̃G���h�|�C���g���i�[�����*/
void parent(){
    int status;
    char *p = "Hello Kid";
    printf("this is parent process,\n");
    close(fd[0]);
    /*pipe�ɕ������ꕶ��������(���M)���Ă���*/

    while(*p){
        /*�ϐ�p��char�^�Ȃ̂�4byte*/
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
//�q�v���Z�X�ł��������Ǝ��s
void child(){
    int i , c;
    printf("This is child process.\n");
    close(fd[1]);
    /*pipe���瑗���Ă����f�[�^����M�A������char�^�ɂ��Ă���*/
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
    /*�}���`�v���Z�X����try catch�����˂Ă���*/
    if((pid = fork()) < 0){
        perror("fork");
        exit(1);
    }
    /*child��parent�����s*/
    if(pid){
        parent();
    }else{
        child();
    }
    return 0;
}