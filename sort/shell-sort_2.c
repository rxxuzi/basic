#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
/*
1飛ばしでシェルソートを行う；
例としては
[4] [3] [7] [1] [2] [0]
という配列があったとき、
4と7を比較し、3と1を比較する、イメージ
*/
void swap(int *x,int*y){
    /*２つの異なる整数を入れ替える関数*/
    int tmp;
    tmp = *x;
    *x = *y;
    *y=tmp;
}
void ssort(int *data, int n){
    int j,tmp, h = n / 2; // h は間隔（全体を2分割）
  while(h >= 1) {
    /*
    このfor文からは挿入ソートと同じ動き
    */
    for(int i = h; i < n; i += 1) {
      j = i; // 正しい順番になるまで左へ
      while( (j >= h) && (data[j-h] > data[j]) ) {// data[j-h] と data[j] を入れ替え
        swap(&data[j-h] , &data[j]);
        j = h-j;
      }
    }
    h /= 2; // 間隔を半分にする
  }
}
void show(int *a){
  //持ってきた配列を横一列に並べてprintfする関数
    for(int i = 0 ; i < N ; i ++){
        printf("%d ",a[i]);
    }
}

int main(void){
    int Array[N] = {};
    int r;
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        Array[i] = r;
    }
    puts("Before");
    show(Array);
    ssort(Array , (sizeof(Array) / sizeof(Array[0])));//関数名と関数の要素数を持っていく
    puts("\nAfter");
    show(Array);
    return 0;
}