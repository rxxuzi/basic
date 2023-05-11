#include <stdio.h>
#include <math.h>
double f(double x){
    /*ŠÖ”*/
    //double y = ( x - 3 ) * ( x - 3 );
    double y = (2 * pow(x,6)) -(5 * x) +5;
    return y;
}
double df (double a,double dx){
    /*”÷•ªŠÖ”*/
    
    return ( f(a + dx) - f(a) ) / dx;
}
int main(void){
    double x=1.0;//step 1: ‰Šú’l‚ðŒˆ‚ß‚é
    double dx = 0.00001;
    double e=0.000001;//Œë·
    double a = 0.0001;
    int count = 1;
    do{
        x = x - ( a * df(x,dx) );//step 2 ŽŸ‚ÌˆÚ“®æ‚ðŒˆ‚ß‚é
        printf("%4d ‰ñ–Ú‚ÌŒX‚«%20f\n",count,df(x,dx));
        count++;
    } while ( fabs(df(x,dx)) > e );
    
    printf("f(%10f) = %10f\n",x,f(x));
    return 0;

}