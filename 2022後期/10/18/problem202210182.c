#include <stdio.h>
#include <math.h>
double f(double x,double y){
    //double z = ((x-3)*(x-3)) + ((y-3)*(y-3));
    double z = (0.5 * pow(x,6)) + (0.5 * x)+ (2 * pow(y,6));
    return z;
}
double dxf (double x,double y,double dx){
    /*”÷•ªŠÖ”*/
    return ( f((x + dx) , y) - f(x,y) ) / dx;
}
double dyf (double x,double y,double dx){
    /*”÷•ªŠÖ”*/
    return ( f( x , (y + dx)) - f(x,y) ) / dx;
}
int main(void){
    double x = 3.0;//step 1: ‰Šú’l‚ðŒˆ‚ß‚é
    double y = 2.0;
    double dx = 0.00001;
    double e = 0.000001;//Œë·
    double a = 0.001;
    int count = 1;

    do{
        x = x - ( a * dxf(x,y,dx) );//step 2 ŽŸ‚ÌˆÚ“®æ‚ðŒˆ‚ß‚é
        y = y - ( a * dyf(x,y,dx) );//step 2 ŽŸ‚ÌˆÚ“®æ‚ðŒˆ‚ß‚é
        printf("%5d‰ñ–Ú : dxf = %8f, dyf = %8f\n",count,dxf(x,y,dx),dyf(x,y,dx));
        count++;
    } while ( fabs( dxf(x,y,dx)) > e || fabs( dyf(x,y,dx) ) > e);

    printf("x = %10f,y=%10f\n",x,y);
    printf("f(x,y) = %10f\n",f(x,y));
    return 0;

}