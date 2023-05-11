#include <stdio.h>
#include <stdlib.h>

static int won_count = 0;
static int consecutive_victories = 0;
void play(){
    int player =0;
    int flag = 0;
    char hand[3] = "GPC";
    printf("0 is G/ 1 is P / 2 is C -->");
    scanf("%d",&player);
    
    
    int dealer = rand() % 3;
    if (dealer == player)//Ÿ‚¿
    {
        printf("You Won!!");
        switch (player)
        {
        case 0:
            puts("Your Hands is G, Dealer Hands is C");
            break;
        case 1:
            puts("Your Hands is P, Dealer Hands is G");
            break;
        default:
            puts("Your Hands is C, Dealer Hands is P");
            break;
        }
        won_count ++;
        
    }else{
        if(rand()%2 == 0){
            puts("You Lost");
        }else{
            puts("Draw");
        }
        
    }
    
    
}
int main(void){
    int count = 10;
    for (size_t i = 0; i < 10; i++){
        play();
    }
    printf("Ÿ‚Á‚½‰ñ” : %d",won_count);
    printf("˜AŸ‰ñ” %d",consecutive_victories);
    
    
    return 0;
}