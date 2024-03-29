#include <stdio.h>
#include <math.h>
double f(double x){
    /*関数*/
    //double y = ( x - 3 ) * ( x - 3 );
    double y = (2 * pow(x,6)) -(5 * x) +5;
    return y;
}
double df (double a,double dx){
    /*微分関数*/
    
    return ( f(a + dx) - f(a) ) / dx;
}
int main(void){
    double x=1.0;//step 1: 初期値を決める
    double dx = 0.00001;
    double e=0.000001;//誤差
    double a = 0.0001;
    int count = 1;
    do{
        x = x - ( a * df(x,dx) );//step 2 次の移動先を決める
        printf("%4d 回目の傾き%20f\n",count,df(x,dx));
        count++;
    } while ( fabs(df(x,dx)) > e );
    
    printf("f(%10f) = %10f\n",x,f(x));
    return 0;

}