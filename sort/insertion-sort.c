#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
/*
swap�֐���
����ւ���֐�
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
        while ((j>0) && (data[j-1] > data[j])){//data�z�����j�Ԗڂ���t�Ƀ\�[�g���Ă���
            swap(&data[j-1], &data[j]);//����ւ�
            j--;
        }
    }
}

int main (void){
    int data[N];
    int r;

    srand((unsigned int)time(NULL));
    /*���ݎ������痐���������Ă���*/

    
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
    printf("\n%2f�b������܂���",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}