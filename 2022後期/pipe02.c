#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
int fd[2]; //pipe�p�̈���

/*�e�v���Z�X���̕�����str�̏��
pipe�֐����g���Ďq�v���Z�X���ŕ\������v���O����*/
int main(void){ //mian�֐�
    char str[] = "Hello C Language!!";//�q�v���Z�X�ɑ���\��̕�����
    char read_str[100];//�q�v���Z�X���Ŏg���ǂݎ��p�̔z��

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
    close(fd[1]);
    /*�������ݗp�G���h�|�C���g���N���[�Y����B
    (�ǂݎ���p�ɂ���)*/
    read(fd[0] , read_str , sizeof(read_str));
    /*read�֐�
    �ǂݎ��p�̃G���h�|�C���g�̕ϐ���,
    �ǂݎ��p�̔z��(�������̓|�C���^),
    �ǂݎ��ۂ̕ϐ�(�z��)�̃o�C�g��
    */
    printf("Get String is : %s\n",read_str);//�擾�����������\������
    close(fd[0]);/*�ǂݍ��ݗp�G���h�|�C���g���N���[�Y����B*/
    break;
    default://�e�v���Z�X
    close(fd[0]);
    /*�ǂݍ��ݗp�G���h�|�C���g���N���[�Y����B
    (�������ݐ�p�ɂ���)*/
    write(fd[1] , str , sizeof(str));
    /*read�֐�
    �������ݗp�̃G���h�|�C���g�̕ϐ���,
    �������ݗp�̔z��(�������̓|�C���^),
    �������ލۂ̕ϐ�(�z��)�̃o�C�g��
    */
    close(fd[1]);/*�������ݗp�G���h�|�C���g���N���[�Y����B*/
    break;
    }
    return 0;
}