#include <stdio.h>
#define N   100
 
int main(void){
    //  N�܂ł̐��̑f����\������B
    int i,m,n;
    int data[N + 1], result[N + 1];
    //  �z��̗v�f��1������B
    for (i = 0; i < N+1; i++){
        data[i] = 1;
    }
    //  0��1�́A�ŏ����珜�O����
    data[0] = 0;
    data[1] = 0;
    m = 2;
    n = 0;
    do{
        //  �f���̔{�������X�g����폜����
        for (i = 2 * m; i < N + 1; i+=m){
            data[i] = 0;
        }
        //  ���ʂ��i�[
        result[n] = m;
        n++;
        //  ���̑f������������
        do{
            m++;
        }while (data[m] == 0 && m < N + 1);
    } while (m < N + 1);
    //  ���ʂ̏o��
    for (i = 0; i < n; i++){
        //  10�s���Ƃɉ��s
        printf("%3d ", result[i]);
        if ((i+1) % 10 == 0){
            printf("\n");
        }
    }
    printf("\n");
}