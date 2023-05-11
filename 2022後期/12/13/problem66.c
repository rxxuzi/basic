#include <stdio.h>
#include <stdlib.h>

static int win_count = 0;
static int draw_count = 0;
static int lose_count = 0;
static int consecutive_victories = 0;
static int result = 0;

void play(){
    int player =0;
    int flag = 0;
    int counter = 0;
    char hand[3] = "GPC";
    printf("0 is G/ 1 is P / 2 is C -->");
    scanf("%d",&player);
    
    
    int dealer = rand() % 3;
    //int dealer = 2;
    if (dealer == player)//Ÿ‚¿
    {
        puts("You Won!!");
        win_count ++;
        result ++;
    }else{
        if(rand()%2 == 0){
            puts("You Lost");
            lose_count ++;
        }else{
            puts("Draw");
            draw_count ++;
        }
        result = 0;
    }
    if(consecutive_victories < result){
        consecutive_victories = result;
    }
    
    
}
int main(void){
    double a,b,c;
    FILE *fp;
    int count = 10;    
    int win,con,res;
    

    fp = fopen("./tmp/win.txt", "w+");

    if(fp != NULL){
        fscanf(fp,"%d,%d,%d",&win,&con,&res);
        win_count = win;
        consecutive_victories = con;
        result = res;
    }
    
    play();

    fprintf(fp, "%d,%d,%d,",win_count,consecutive_victories,result);//Ÿ‚Á‚½‰ñ”

    printf("Ÿ‚Á‚½‰ñ”%d",win_count);
    printf("˜AŸ‰ñ”%d",consecutive_victories);//˜AŸ‹L˜^
    
    fclose(fp);
    return 0;
}
