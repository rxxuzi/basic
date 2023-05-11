#include <stdio.h>
#include <stdlib.h>
int main(void){
    double x = 0.0;
    int count = 10000;
    for (size_t i = 0; i < count; i++)
    {
        x += rand() % 6 + 1;
    }
    printf("%f , ",x);
    x = x / count;
    printf("%f\n",x);

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",rand() % 6 + 1 );
    }
    
    return 0;
    
}