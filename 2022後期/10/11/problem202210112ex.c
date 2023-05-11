#include <stdio.h>
#include <math.h>
double f(double x){
    /*ŠÖ”*/
    double y = x*x;
    return y;
}
double simpson(double a, double b, int n, double (*f)()){
	double S,h;
	int i;
	
	h=(b-a)/(2.0*n);
	
	/*ƒVƒ“ƒvƒ\ƒ“Œö®*/
	S=((*f)(a)+(*f)(b));
	for (i=1;i<n;i++){
		S += 4.0*(*f)(a+(2.0*i-1.0)*h)+2.0*(*f)(a+2.0*i*h);
	}
	S += 4.0*(*f)(a+(2.0*n-1.0)*h);
	S *= h/3.0;
	
	return S;
}

int main(void){
    double x = 0;
    double dx = 1.0;
    int a=0;
    
    for(dx = 1.0; dx > pow(10, -100); dx/=2){
        printf("x = %f, dx = %.10f\n" , x , dx);
        printf("ç(1¨0)f(x) = %.20f\n" , df(x , dx));
        a++;printf("%d\n",a);
    }
    return 0;
}