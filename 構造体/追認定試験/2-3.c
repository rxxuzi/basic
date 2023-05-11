#include<stdio.h>
#define sq(x) ((x)* (x))
#define N 10000 
#define _a -50
#define _b 500
#define swap(type, a , b) 
double f(double x){
    double y;
    y = 2 * x - 2;
    return y;
}
int main(void){
    double a = _a, b = _b;
    int c = 0;
    while(sq( f(a) - f(b) ) > 0.0001){
        printf("count %2d ,a = %f ,b = %f \n" ,c, a , b);
        printf("f(a) = %f , ", f(a));
        printf("f(b) = %f\n",f(b));
        if( f((b + a) / 2 ) *  f(a) > 0){
            a = (b+a)/2;
        }else{
            b = (b+a)/2;
        }
        printf("-> f((b + a) / 2 ) *  f(a) = %f\n", f((b + a) / 2 ) *  f(a));
        c++;
    }
    printf("%f",b);
    return 0;
}