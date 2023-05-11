#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    
    int win,draw,lose;
    
    int match = 0;//�}�b�`��
    int streak = 0;//�A����
    int flag = 0; //�A�����Ă邩�ǂ���
    int result = 0;//�ō��A����

    int hand;//�̂Ĉ���
    FILE *fp;

    srand((unsigned int)time(NULL));

    fp = fopen("./tmp/log.txt", "r");
    if (fp == NULL){
        exit(1);//null�̎��Ƀ^�[�~�i���ɕԂ�
    }else{
        
        fscanf(fp,"%d,%d,%d,%d,%d,%d,%d",&win,&draw,&lose,&match,&streak,&flag,&result);
        printf("�}�b�`��:%d\n",match);
    }
    fclose(fp);
    //printf("Your hand is");
    //scanf("%d",&hand);
    int game = rand() % 3;
    
    switch (game)
    {
    case 0:
        win ++;
        flag = 1;
        printf("Win\n");
        break;
    case 1:
        draw ++;
        flag = 0;
        printf("Draw\n");
        break;
    case 2:
        lose++;
        flag = 0;
        printf("Lose\n");
        break;
    default:
        puts("error");
        break;
    }
    match ++;//�ΐ��

    printf("win : %d, draw : %d, lose : %d\n",win,draw,lose);
    printf("���� %lf\n",(float)(win / match));

    /*�����ď����Ă邩�ǂ���*/
    if (flag){
        streak ++;
        printf("%d�A�����ł�\n",streak);
    }else{
        streak = 0;
    }

    /*�A���L�^*/
    if (streak > result){
        result = streak;
        printf("�ō��A���L�^���ł�\n");
    }
       
    /*�L�^*/
    fp = fopen("./tmp/log.txt", "w+");
    fprintf(fp,"%d,%d,%d,%d,%d,%d,%d",win,draw,lose,match,streak,flag,result);
    fclose(fp);
    
    
    return 0;
}