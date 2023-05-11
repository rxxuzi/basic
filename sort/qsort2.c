#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void show(int *n){
	for(int i = 0 ; i < N ; i ++){
		printf("%d ",n[i]);
	}
	puts("");
}
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
				show(Array);printf("piv:%d, left:%d, right:%d, i:%d, j:%d\n",Array[pivot],left,right,Array[i],Array[j]);
			}
			puts("while1");
			
			while(Array[j] > Array[pivot]){
				j--;
				show(Array);printf("piv:%d, left:%d, right:%d, i:%d, j:%d\n",Array[pivot],left,right,Array[i],Array[j]);
			}
			puts("while2");

			if (i<j){
				swap(&Array[i],&Array[j]);
			}
			show(Array);printf("piv:%d, left:%d, right:%d, i:%d, j:%d\n",Array[pivot],left,right,Array[i],Array[j]);
		}
		puts("end of big while");
		/*�ߒ����o�͂���v���O����*/
		show(Array);printf("piv:%d, left:%d, right:%d, i:%d, j:%d\n",Array[pivot],left,right,Array[i],Array[j]);
		/*pivot��j�����ւ���*/
		swap(&Array[pivot],&Array[j]);

		/*�ċA�֐�*/
		puts("�ċA�֐�");
		/*piv��菬������ */
		quicksort(Array, left, j-1);

		puts("�ċA�֐�");
		quicksort(Array, j+1, right);
	}
}

int main(void){
    int count ,r ; clock_t start,end;
	count =N;
	int Array[N] = {3,7,-1,4,8};
	/*
    srand((unsigned int)time(NULL));
    for(int  i = 0 ; i < count ; i ++ ){
        r = rand();
        Array[i] = r;
    }
	*/
   
    puts("----Make a Quick sort!----");
    
    start =clock();
	quicksort(Array,0,count-1);
    end =clock();
	puts("After Sort!");
    show(Array);
    
    printf("%2f�b������܂���",(double)(end-start)/CLOCKS_PER_SEC); 

    return 0;
}