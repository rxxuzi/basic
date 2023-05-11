#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    srand((unsigned int )time(NULL));
    int ball=74;
    int flag = 0;
    int dice;
    int counter = 0;
    int i=0;
    double pro;
    int max = 100000;
    do
    {   
        dice = rand()%ball;
        /*赤のボールを判定*/
        if (0 <= dice && dice < 30){
            flag++;
            dice = rand()%ball;
            /*青のボールを判定*/
            if (30 <= dice && dice < 62){
                flag++;
                dice = rand()%ball;
                /*白のボールを判定*/
                if (62 <= dice && dice < 74){
                    counter++;
                    flag=0;
                }else{
                    flag = 0;
                    i++;
                }
            }else{
                flag = 0;
                i++;
            }
        }else{
            flag = 0;
            i++;
        }

        

       

        printf("%5d , %5d , %5d\n",i,flag+1,counter);
    } while (i < max);
    pro =  (double)counter/max;
    double p = (30/ball) * (32/ball) *(12/ball);
    printf("実行結果からでた確率%lf\n",pro);
    return 0;
    
    
}