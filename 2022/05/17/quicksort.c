#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void Swap(int *x,int l,int r);
void Qsort(int *x,int left, int right){
    int p,l,r,tmp;
    l = left;
    r = right;

    p = x[(l+r)/2];
    while(1){
        while (x[l] < p){
            l++;
        }
        while (p < x[r]){
            r--;
        }/*
        if (l >= r){
            break;
        }*/
        Swap(x, l , r);
        l++;
        r--;
    }while(l >= r);
    if (left < l - 1){ 
        Qsort(x, left, l - 1); 
    }    
    if (r + 1 <  right){        
        Qsort(x, r + 1, right);  
    }
}

void Swap(int *x,int l,int r){
    int tmp,a,b;
    a=l;
    b=r;
    tmp = x[a];
    x[a] = x[b];
    x[b] = tmp;
}
int main(void){
    int Array[N] = {};
    int r;
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < N ; i ++ ){
        r = rand();
        printf("%d\n" ,r);
        Array[i] = r;
    }
    puts("---Make a quick sort !!---");
    Qsort(Array,0,N-1);

    for(int i = 0; i < N ; i ++){
        printf("%d\n",Array[i]);
    }
    return 0;
}