#include <stdio.h>
#define N 5
void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bsort(int a[] , int n){
    for(int i = 0 ; i < n-1 ; i ++ ){
        for(int j = n-1 ; j > i ; j -- ){
            if(a[j - 1] > a[j]){
                swap(&a[j] , &a[j-1]);
            }
        }
    }
}

int main(void){
    int point[N];

    printf("%d人の点数を入力してください\n",N);
    for(int i = 0 ; i < N ; i ++ ){
        printf("%2d番:",i);
        scanf("%d",&point[i]);
    }
    bsort(point,N);
    puts("昇順にソートする");
    for(int j = 0 ; j < N ; j ++ ){
        printf("%2d番:%d\n",j,point[j]);
    }
    return 0;
}