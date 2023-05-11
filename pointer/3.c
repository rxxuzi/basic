#include <stdio.h>
#define N 2000
#define sqr(x) ((x)*(x)) 
int main(void){
    int R;
    scanf("%d",&R);
    printf("%d^2 = %d\n",R,sqr(R));
    printf("%d + %d = %d\n",R,N,N+R);
    return 0;
}