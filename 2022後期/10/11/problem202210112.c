#include <stdio.h>
#include <math.h>
double f(double x){
    /*ŠÖ”*/
    double y = (3*x*x*x*x*x)-((3/2)*x*x);
    //double y = 2*x*x;
    return y;
}
double df (double x,double dx){
    /*Ï•ªŠÖ”*/
    double y=0;
    do
    {
        y += ( (f(x) + f(x + dx)) * dx ) / 2;
        x += dx;
    } while (x < 1.0);
    
    return y;
}
int main(void){
    double x = 0;
    double dx = 1.0;
    int a=0;
    
    for(dx = 1.0; dx > pow(10, -100); dx/=2){
        printf("x = %f, dx = %.10f\n" , x , dx);
        printf("ç(1¨0)f(x) = %.20f\n" , df(x , dx));
        a++;
        //printf("%d\n",a);
    }
    return 0;
}