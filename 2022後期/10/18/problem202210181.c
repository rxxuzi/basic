#include <stdio.h>
#include <math.h>
double f(double x){
    /*�֐�*/
    //double y = ( x - 3 ) * ( x - 3 );
    double y = (2 * pow(x,6)) -(5 * x) +5;
    return y;
}
double df (double a,double dx){
    /*�����֐�*/
    
    return ( f(a + dx) - f(a) ) / dx;
}
int main(void){
    double x=1.0;//step 1: �����l�����߂�
    double dx = 0.00001;
    double e=0.000001;//�덷
    double a = 0.0001;
    int count = 1;
    do{
        x = x - ( a * df(x,dx) );//step 2 ���̈ړ�������߂�
        printf("%4d ��ڂ̌X��%20f\n",count,df(x,dx));
        count++;
    } while ( fabs(df(x,dx)) > e );
    
    printf("f(%10f) = %10f\n",x,f(x));
    return 0;

}