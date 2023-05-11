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
    int num = N;
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        //printf("%d\n" ,r);
        data[i] = r;
    }
    printf("要素数：%d\n",num);
    puts("---Make a quick sort !!---");
    clock_t start,end;
    start = clock();
    qsort(data, N,sizeof(int), compare_int);//quickソート関数
    end = clock();
    for (int i = N; i > 0; i-=400) {
        printf("%d ", data[i]);
    }
    printf("\n%2f秒かかりました",(double)(end-start)/CLOCKS_PER_SEC); 
    return 0;
}