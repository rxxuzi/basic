#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
int bsort(int *Array){
    int tmp;
    for(int i = 0 ; i < N ; i ++){
        for(int j = 0 ; j < i ; j ++){
            if(Array[i] > Array[j] ){
                tmp = Array[i];
                Array[i] = Array[j];
                Array[j] = tmp;
            }
        }
    }
    return *Array;
}
int main(void){
    int Array[N] = {};
    int r;
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        //printf("%d\n" ,r);
        Array[i] = r;
    }
    puts("----Make a Bubble sort!----");
    clock_t start,end;
    start =clock();
    bsort(Array);
    
    for(int  i = 0 ; i < N ; i +=1000 ){
        printf("%d\n" ,Array[i]);
    }
    end =clock();
    printf("%2f•b‚©‚©‚è‚Ü‚µ‚½",(double)(end-start)/CLOCKS_PER_SEC); 

    return 0;
}