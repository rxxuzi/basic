#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 20000
int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){
    int data[N] = {};
    int r;
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        //printf("%d\n" ,r);
        data[i] = r;
    }
    puts("---Make a quick sort !!---");
    clock_t start,end;
    start = clock();
    qsort(data, N, sizeof(int), compare_int);
    end = clock();
    for (int i = N; i > 0; i-=1000) {
        printf("%d\n", data[i]);
    }
    printf("%2f•b‚©‚©‚è‚Ü‚µ‚½",(double)(end-start)/CLOCKS_PER_SEC); 
    return 0;
}