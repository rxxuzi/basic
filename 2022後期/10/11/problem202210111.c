#include <stdio.h>
#include <math.h>
double f(double x){
    /*ŠÖ”*/
    //double y = x * x;
    double y = ( 0.5*x*x*x*x*x*x ) - ( 0.5*x*x*x );
    return y;
}
double df (double a,double dx){
    /*”÷•ªŠÖ”*/
    return ( f(a + dx) - f(a) )/ dx;
}
int main(void){
    double x = 1.0;
    double dx ;
    double ans = 0;
    for(dx = 1.0; dx > pow(10, -100); dx/=2){
        printf("====%.20f====\n",dx);
        printf("f(x)  = %.14f\n" , f(x));
        printf("f'(x) = %.14f\n",df(x,dx));
        
    }
    
    return 0;
}