#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SR 82
int main(void){
    srand((unsigned int )time(NULL));
    int dice;
    int flag = 0;
    int counter = 0;
    int i=0;
    double pro;
    int max = 10000;
    do
    {   
        dice = rand()%100;
        if (dice <= SR){
            /*フラグを+1する*/
            flag++;
        }else{
            /*フラグを0にする*/
            flag = 0;
            i++;
        }
        
        if(flag == 7){
            /*7回連続で当たったらカウントを+1してフラグを0にする*/
            counter++;
            flag = 0;
            i++;
        }
        
        printf("%5d , %5d , %5d\n",i,flag+1,counter);
    } while (i != max);
    pro =  (double)counter/max;
    double p = 0.82 * 0.82 * 0.82 * 0.82 * 0.82 * 0.82 * 0.82;
    printf("実行結果からでた確率%lf\n",pro);
    printf("計算上の確立%lf",p);
    return 0;
}