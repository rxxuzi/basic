#include <stdio.h>
#include <time.h>
int main(void){
    int max = 100000;
    int arr[100000];
    int arr2[100000];
    clock_t start, end;
    clock_t start2, end2;
    int time =0;
    for(int p = 0 ; p < 500; ++p){
        start = clock();
    for(int i = 0; i < max; ++i){
        arr[i] = i * 2 + 1;
    }
    for(int i = 0; i < max; i+= 5000){
        printf("%d",arr[i]);
    }
    end = clock();
    

    start2 = clock();
    for(int i = 0; i < max; ++i){
        arr2[i] = i * 2 + 1;
    }
    for(int i = 0; i < max; i+= 5000){
        printf("%d",arr2[i]);
    }
    end2 = clock();
    puts("");
    printf("前置インクリメントの実行時間: %f[ms]\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);
    printf("後置インクリメントの実行時間: %f[ms]\n", (double)(end2 - start2) / CLOCKS_PER_SEC * 1000);

    if((double)(end - start) < (double)(end2 - start2)){
        time ++;
    }
    }

    printf("前置インクリメントが早かった回数%d/500",time);

    
    return 0;
}