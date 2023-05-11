#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    
    int win,draw,lose;
    
    int match = 0;//マッチ回数
    int streak = 0;//連勝回数
    int flag = 0; //連勝してるかどうか
    int result = 0;//最高連勝回数

    int hand;//捨て引数
    FILE *fp;

    srand((unsigned int)time(NULL));

    fp = fopen("./tmp/log.txt", "r");
    if (fp == NULL){
        exit(1);//nullの時にターミナルに返す
    }else{
        
        fscanf(fp,"%d,%d,%d,%d,%d,%d,%d",&win,&draw,&lose,&match,&streak,&flag,&result);
        printf("マッチ回数:%d\n",match);
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
    match ++;//対戦回数

    printf("win : %d, draw : %d, lose : %d\n",win,draw,lose);
    printf("勝率 %lf\n",(float)(win / match));

    /*続けて勝ってるかどうか*/
    if (flag){
        streak ++;
        printf("%d連勝中です\n",streak);
    }else{
        streak = 0;
    }

    /*連勝記録*/
    if (streak > result){
        result = streak;
        printf("最高連勝記録中です\n");
    }
       
    /*記録*/
    fp = fopen("./tmp/log.txt", "w+");
    fprintf(fp,"%d,%d,%d,%d,%d,%d,%d",win,draw,lose,match,streak,flag,result);
    fclose(fp);
    
    
    return 0;
}