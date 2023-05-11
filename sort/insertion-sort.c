#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
/*
swap関数は
入れ替える関数
*/
void swap(int *x, int *y){
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void insertion(int *data){
    int i , j;
    for(i=1; i < N; i++){
        j = i;
        while ((j>0) && (data[j-1] > data[j])){//data配列内のj番目から逆にソートしていく
            swap(&data[j-1], &data[j]);//入れ替え
            j--;
        }
    }
}

int main (void){
    int data[N];
    int r;

    srand((unsigned int)time(NULL));
    /*現在時刻から乱数を持ってくる*/

    
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        data[i] = r;
    }
    clock_t start,end;

    start = clock();//start
    insertion(data);
    end = clock();
    for(int  i = 0 ; i < N ; i +=400){
        printf("%d " ,data[i]);
    }
    printf("\n%2f秒かかりました",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}