#include <stdio.h>
#include <stdlib.h>
#define N 10
static int max = 10000;
void sort(int arr[]){
    int x[N];
    int k;
    
    int buckets[N];
    for(int m = 0 ; m < max ; m *= 10){
        for(int i = 0 ; i < N ; i ++){
            x[i] = arr[i]%10
        }
    }
}
int main(void){
    int arr[N] = {
        129,
        20,
        393,
        432,
        3,
        21,
        438,
        93,
        107,
        900
    }

    sort(arr);
}