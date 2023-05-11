#include <stdio.h>
#include <math.h>
int sign(double n){
    return n >= 0 ? 1 : -1;
}
double f(double u){
    double g = 9.8;
    double x = 100000/3600;
    return ( (0.75 * x) + (x * x) )/ (2*u*g) ;
}
int main(void){
    double a = -100;
    double e = 0.00001; //¸“x
    double b = 100;

    
    do{
        printf("a: "); scanf("%f" , &a);
        printf("b: "); scanf("%f" , &b);
        
    } while ((f(a) * f(b) ) > 0);
    
    
    do{
        if ( sign(f((b+a)/2)) == sign(f(a))  )
        {
            a = (b+a) / 2;
        }
        if ( sign(f((b+a)/2)) == sign(f(b))  )
        {
            b = (b+a) / 2;
        }
        
    }while (fabs(b - a) > e);
    
    printf("a = %f ,b = %f",a,b);
    
    
    
    


    return 0;

}