#include<stdio.h>
#include <stdlib.h>
#include<math.h>
double Buffon(double a, double l, double pin, double angle);

int main(void){
    srand((unsigned int)time(NULL));

    double a = 5;/*pinの長さ*/
    double length = 10; /*ノートの幅*/
    double pin = ( rand() + ( rand() / (double)RAND_MAX ));/*pinのy座標*/
    double angle = ( rand() % 360 ) * ( M_PI / 180 );/*pinが倒れた時の角度*/
    double pin2 = pin + a*sin(angle);/*pinから垂直の長さ*/
    int counter = 0;
    int max = 100000;
    
    for (size_t i = 0; i < max; i++){
        pin = ( rand() + ( rand() / (double)RAND_MAX ));
        angle = ( rand() % 360 ) * ( M_PI / 180 );
        pin2 = pin + a*sin(angle);
        /*
        printf("angle : %f , pin : %f , pin2 : %f\n",angle,pin,pin2);
        printf("%d\n",abs(floor(pin2/length)-floor(pin/length)));
        */
        if (abs(floor(pin2/length)-floor(pin/length) == 1)){
            counter ++;
        }   
    }
    printf("max : %d , counter : %d\n",max,counter);
    double pro = ((double)counter) / max;/*確率*/
    printf("probability: %f\n",pro);
    printf("π: %f\n",(a) / ( length * pro));

    

    return 0;
}
