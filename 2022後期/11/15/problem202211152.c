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
            /*�t���O��+1����*/
            flag++;
        }else{
            /*�t���O��0�ɂ���*/
            flag = 0;
            i++;
        }
        
        if(flag == 7){
            /*7��A���œ���������J�E���g��+1���ăt���O��0�ɂ���*/
            counter++;
            flag = 0;
            i++;
        }
        
        printf("%5d , %5d , %5d\n",i,flag+1,counter);
    } while (i != max);
    pro =  (double)counter/max;
    double p = 0.82 * 0.82 * 0.82 * 0.82 * 0.82 * 0.82 * 0.82;
    printf("���s���ʂ���ł��m��%lf\n",pro);
    printf("�v�Z��̊m��%lf",p);
    return 0;
}