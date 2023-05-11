#include <stdio.h>
#include <stdlib.h>

int pipe_fd[2];

void do_parent(){
    int status;
    //p�ɕ��������͂���
    char *p = "Hello, my kid.";
    printf("this is my parent\n");
    //�ŏ��ɃN���[�Y����
    close(pipe_fd[0]);
    //�����񂪏I���܂Ń��[�v
    while (*p){
        //���ĂȂ�����1�o�C�g���f�[�^������
        //0����Ȃ�����
        if( write(pipe_fd[1],p,1) < 0){
            perror("write");
            exit(1);
        }
        //char�^����C���N�������g
        p++;
    }
    //close�͒ʐM�̏I�����q�v���Z�X�ɒʒm
    close(pipe_fd[1]);
    //�q�v���Z�X���I������܂ő҂�
    if(wait(&status) < 0){
        perror("wait");
        exit(1);
    }
    
}
void do_child(){
    int i,c;

    printf("this is child\n");
    //1�����0����ǂݍ���
    close(pipe_fd[1]);
    //parent�����M
    //�p�C�v�ɑ΂��ĕϐ�c��1�o�C�g���ł�����
    while ((i = read(pipe_fd[0],&c,1)> 0)){
        //1�o�C�g���傫��������o��
        putchar(c);
    }
    //���s���ăN���[�Y
    putchar('\n');
    close(pipe_fd[0]);
    
}
int main(){
    int child;
    if(pipe(pipe_fd) < 0){
        perror("pipe");
        exit(1);
    }
    //child�ɑ��
    if((child = fork()) < 0){
        perror("fork");
        exit(1);
    }

    if(child){
        do_parent();
    }else{
        do_child();
    }

    return 0;

}
/*
wait(&abc)
abc�Ɏq�v���Z�X�̃A�h���X������
*/