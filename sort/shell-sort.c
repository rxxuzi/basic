#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
void ssort(int *Array,int inc){
     int i, j, tmp;
    //inc = 4;//シェルソート実行時の間隔をきめる
  while (inc > 0){
    for (i=0; i < N; i++){
      j = i;
      tmp = Array[i];
      while ((j >= inc) && (Array[j-inc] > tmp)){
        Array[j] = Array[j - inc];
        j = j - inc;
      }
      Array[j] = tmp;
    }
    if (inc/2 != 0){
      inc = inc/2;
    }else if (inc == 1){
      inc = 0;
    }else{
      inc = 1;
}}}

void show(int *a){
    for(int i = 0 ; i < N ; i +=400){
        printf("%d ",a[i]);
    }
}
int main(void){
    int Array[N] = {};
    int r,inc;
    time_t start , end;
    srand((unsigned int)time(NULL));
    printf("要素数%d\n",N);
    printf("h = ");
    scanf("%d",&inc);
    
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        Array[i] = r;
    }
    //puts("Before");
    //show(Array);
    start = clock();//start
    ssort(Array,inc);
    end = clock();//end
    puts("After");
    show(Array);
    printf("\n%2f秒かかりました",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}