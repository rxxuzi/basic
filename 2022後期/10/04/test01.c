#include <stdio.h>
#include <math.h>
int sign(double n){
    return n >= 0 ? 1 : -1;
}
int main(void){
     double a = 0.0;
    double e = 0.01; //ê∏ìx
    double b = 10;
    printf("%d" , sign(a));
    printf("%f" , abs(e));
    return 0;
}