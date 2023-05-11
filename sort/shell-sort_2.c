#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
/*
1��΂��ŃV�F���\�[�g���s���G
��Ƃ��Ă�
[4] [3] [7] [1] [2] [0]
�Ƃ����z�񂪂������Ƃ��A
4��7���r���A3��1���r����A�C���[�W
*/
void swap(int *x,int*y){
    /*�Q�̈قȂ鐮�������ւ���֐�*/
    int tmp;
    tmp = *x;
    *x = *y;
    *y=tmp;
}
void ssort(int *data, int n){
    int j,tmp, h = n / 2; // h �͊Ԋu�i�S�̂�2�����j
  while(h >= 1) {
    /*
    ����for������͑}���\�[�g�Ɠ�������
    */
    for(int i = h; i < n; i += 1) {
      j = i; // ���������ԂɂȂ�܂ō���
      while( (j >= h) && (data[j-h] > data[j]) ) {// data[j-h] �� data[j] �����ւ�
        swap(&data[j-h] , &data[j]);
        j = h-j;
      }
    }
    h /= 2; // �Ԋu�𔼕��ɂ���
  }
}
void show(int *a){
  //�����Ă����z��������ɕ��ׂ�printf����֐�
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
    ssort(Array , (sizeof(Array) / sizeof(Array[0])));//�֐����Ɗ֐��̗v�f���������Ă���
    puts("\nAfter");
    show(Array);
    return 0;
}