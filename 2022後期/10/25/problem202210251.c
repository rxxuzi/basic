#include <stdio.h>
#include <math.h>
double tmp_f(double x){
    double y = pow(x/2,2) + 1;
    return y;
}
double f(double x){
    /*�֐�*/
    double y = sin(10*x) +pow((x/2),2) + 1;
    return y;
}
double d2f (double a,double dx){
    
    return ( tmp_f(a + dx) - tmp_f(a) ) / dx;
}
double d1f (double a,double dx){
    
    return ( f(a + dx) - f(a) ) / dx;
}
int main(void){
    double x = -5.0;//step 1: �����l�����߂�
    double dx = 0.001;
    double e = 0.0001;//�덷
    double a = 0.001;
    double tmp = 0;
    int    count = 0 ;
    do{
        x = x - ( a * d2f(x,dx) );//step 2 ���̈ړ�������߂�
        tmp = x;
    } while ( fabs( d2f(x,dx)) > e );

    printf("��܂��Ȋ֐��̍ŏ��l\ntmp_f(%10f) = %10f\n",x,tmp_f(x));
    x = tmp; //�����l��1��ڂŏo�����ŏ��l�Ɉړ�����

    do{
        x = x - ( a * d1f(x,dx) );//step 2 ���̈ړ�������߂�
        printf("%4d ��ڂ̌X��%20f\n",count,d1f(x,dx));
        count++;
    } while ( fabs( d1f(x,dx)) > e );
    
    printf("f(%10f) = %10f\n",x,f(x));
   
    
    return 0;

}