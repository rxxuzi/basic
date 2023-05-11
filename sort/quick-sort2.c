#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
/**
 * @brief 
 * swap����֐�
 * @param x 
 * @param y 
 * @return ** void 
 */
void swap(int *x , int *y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
/**
 * @brief 
 * 
 * @param Array �z��
 * @param left ��ԍ��̗v�f
 * @param right ��ԉE�̗v�f
 * @return ** void 
 */
void quicksort(int Array[], int left, int right){
	int i, j , pivot;
	/* left���right�̕����傫�����Ɏ��s����*/
	if(left < right){
		pivot=left; 
		i=left;
		j=right;
		while (i<j){
			/*i���ő�l�Aj���ŏ��l�ɂȂ�悤�Ƀv���O��������Ă���*/
			while(Array[i] <= Array[pivot] && right){
				i++;
			}
			while(Array[j] > Array[pivot]){
				j--;
			}
			if (i<j){
				swap(&Array[i],&Array[j]);
			}
		}
		/*pivot��j�����ւ���*/
		swap(&Array[pivot],&Array[j]);
		/*�ċA�֐���pivot���Ē�`���Ȃ����ׂĂ���*/
		quicksort(Array, left, j-1);
		quicksort(Array, j+1, right);
	}
}

int main(void){
    int count, Array[N] ,r ; clock_t start,end;
	count =N;
	/*�����ݒ�*/
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < count ; i ++ ){
        r = rand();
        Array[i] = r;
    }

   
    puts("----Make a Quick sort!----");
    
    start =clock();
	quicksort(Array,0,count-1);
    end =clock();
    for(int  i = 0 ; i < N ; i +=100){
        printf("%d\n" ,Array[i]);
    }
    
    printf("%2f�b������܂���",(double)(end-start)/CLOCKS_PER_SEC); 

    return 0;
}