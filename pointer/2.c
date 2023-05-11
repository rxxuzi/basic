#include <stdio.h>
int main(void){
    int n=3,m=4;
    int p ;
    (n > m)? (p = (n - m) ) : ( p = (n + m) );
    printf("%d",p);
    return 0;
}