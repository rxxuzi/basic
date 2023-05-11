#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp;
    int co;
    int player;int counter;
    int win,total;
    int win_count=1,total_count=1;
    int r=(rand()%3);

    fp=fopen("temp.txt","r");
    fscanf(fp,"%d %d",&win_count,&total_count);
    fclose(fp);
    printf("èüó¶ÇÕ%dÇ≈Ç∑\n",(win_count/total_count));


    do{
        scanf("%d",&player);
        if((rand()%3) == player){
            printf("you win\n");
            win++;
        }else if(player == 3){
            printf("Game Over\n");
            break;
        }else{
            printf("you lose\n");
        }
        total++;

    }while(1);
    fp=fopen("Janken.txt","w");
    fprintf(fp,"%d %d",(win_count+win),(total_count+total));
    fclose(fp);
    
    return 0;

}