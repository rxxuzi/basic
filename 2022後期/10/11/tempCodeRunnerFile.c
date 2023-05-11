#include <stdio.h>
#include <math.h>
double f(double x){
    /*関数*/
    double y = x*x;
    return y;
}
double df (double x,double dx){
    /*積分関数*/
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
    
    for (dx = 1.0; dx > pow(10, -100); dx/=2){
        printf("x = %f, dx = %.10f\n" , x , dx);
        printf("∫(1→0)f(x) = %.20f\n" , df(x , dx));
    }
    return 0;
}