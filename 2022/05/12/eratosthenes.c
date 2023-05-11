#include <stdio.h>
#define N   100
 
int main(void){
    //  Nまでの数の素数を表示する。
    int i,m,n;
    int data[N + 1], result[N + 1];
    //  配列の要素に1を入れる。
    for (i = 0; i < N+1; i++){
        data[i] = 1;
    }
    //  0と1は、最初から除外する
    data[0] = 0;
    data[1] = 0;
    m = 2;
    n = 0;
    do{
        //  素数の倍数をリストから削除する
        for (i = 2 * m; i < N + 1; i+=m){
            data[i] = 0;
        }
        //  結果を格納
        result[n] = m;
        n++;
        //  次の素数候補を見つける
        do{
            m++;
        }while (data[m] == 0 && m < N + 1);
    } while (m < N + 1);
    //  結果の出力
    for (i = 0; i < n; i++){
        //  10行ごとに改行
        printf("%3d ", result[i]);
        if ((i+1) % 10 == 0){
            printf("\n");
        }
    }
    printf("\n");
}