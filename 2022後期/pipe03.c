#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int fd[2]; //pipe�p�̈���

/*�e�v���Z�X���̕�����str�̏��
pipe�֐����g���Ďq�v���Z�X���ŕ\������v���O����*/
int main(void){ //mian�֐�

    //pipe�̍쐬
    pipe(fd);
    /*pipe�֐��́Afd[0]�ɓǂݎ��p�̃G���h�|�C���g�A
    fd[1]�ɏ������ݗp�̃G���h�|�C���g���i�[�����*/

    //fork�̎��s
    pid_t pid = fork();

    switch (pid){
    case -1://-1���������Ă������̓G���[�ƂȂ�
        perror("FORK FAILED");
        /*perror�֐��́A�G���[�����������ۂɁA
        �G���[���b�Z�[�W��W���G���[�o�͂ɏo�͂��邽�߂̊֐�*/

        exit(1);//�����I��
        break;
    
    case 0: //�q�v���Z�X
    int c , i;//�q�v���Z�X���Ŏg���ǂݎ��p�̕ϐ�
    close(fd[1]);
    /*�������ݗp�G���h�|�C���g���N���[�Y����B
    (�ǂݎ���p�ɂ���)*/
    printf("Get String is : ");//�擾�����������1�������\������
    while(( i = read(fd[0] , &c , sizeof(char))) > 0){
        putchar(c);//�����̕\��
    }
    putchar('\n');//���s 
    close(fd[0]);/*�ǂݍ��ݗp�G���h�|�C���g���N���[�Y����B*/
    break;

    default://�e�v���Z�X
    int status;
    char *str = "Hello C Language!!";//�q�v���Z�X�ɑ���\��̕�����
    close(fd[0]);
    /*�ǂݍ��ݗp�G���h�|�C���g���N���[�Y����B
    (�������ݐ�p�ɂ���)*/

    while(*str){
        /*�z��̗v�f�������write����*/
        if(write(fd[1] , str , 1) < 0){
            perror("WRITE IS ERROR");
            exit(1);//�����I��
        }
        str++; //�C���N�������g
    }    
    close(fd[1]);/*�������ݗp�G���h�|�C���g���N���[�Y����B*/
    if(wait(&status) < 0){
        perror("wait");
        exit(1);
    }
    break;
    }
    return 0;
}