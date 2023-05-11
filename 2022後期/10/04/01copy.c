#include <stdio.h>
#include <math.h>
int sign(double n){
    return n >= 0 ? 1 : -1;
}
double f(double x){
    return x -3;
}
int main(void){
    double a = -10;
    double e = 0.01; //ê∏ìx
    double b = 10;

    /*
    do
    {
        if (f(b) < 0)
        {
            do
            {
                b = b+1;
            } while (f(b) > 0);
            
        }else{
            do
            {
                a = a-1;
            } while (f(a) < 0);
        }
        
    } while ((f(a) * f(b) )< 0);
    */
   /*
   for (double i = -10; i < 10; i++)
   {
    printf("x = %f, y = %f \n" , i , f(i));
   }
   */
   
    
    printf("a = %f ,b = %f\n",a,b);
    /*
    while (fabs(b - a) < e)
    {
        if ( sign( f( (b+a)/2 ) ) == sign( f(a) ) )
        {
            a = (b+a) / 2;
        }else{
            b = (b+a) / 2;
        }
            printf("while ì‡Å@a = %f ,b = %f",a,b);
    }
    */
   if ( sign( f( (b+a)/2 ) ) == sign( f(a) ) )
        {
            a = (b+a) / 2;
        }else{
            b = (b+a) / 2;
        }
    
    printf("a = %f ,b = %f",a,b);
    
    
    
    


    return 0;

}