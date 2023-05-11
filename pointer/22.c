#include <stdio.h>
int main(void){
    int *p  , x = 10;
    p = &(*(&x));
    *p = 5;
    printf("%d %d",*p , x);
    return 0;
}