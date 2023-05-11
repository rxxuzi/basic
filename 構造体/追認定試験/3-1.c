#include <stdio.h>

int main(void){
    int n = 123456;
    int count = 1;
    int i = 1;
    while (n / i > 1)
    {
        count++;
        i*=10;
    }
    printf("%d",count);
    return 0;
    
    
}