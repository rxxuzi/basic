#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(void){
    int *p;
    int count = N;
    p = (int *)malloc(sizeof(int)*N);//ポインタが並んでいる配列
    for (int i = 0; i < N; i++){
        p[i] = i;
    }
    for (size_t i = 0; i < count; i++){
        printf("%d",p[i]);
    }
    ;    
    free(p);
    
    return 0;
    
}