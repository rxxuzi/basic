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
 * swapする関数
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
 * @param Array 配列名
 * @param left 一番左の要素
 * @param right 一番右の要素
 * @return ** void 
 */
void quicksort(int Array[], int left, int right){
	int i, j , pivot;
	/* leftよりrightの方が大きい時に実行する*/
	if(left < right){
		pivot=left; 
		i=left;
		j=right;

		while (i<j){
			/*iが最大値、jが最小値になるようにプログラムされている*/
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
		/*過程を出力するプログラム*/
		show(Array);printf("piv:%d, left:%d, right:%d, i:%d, j:%d\n",Array[pivot],left,right,Array[i],Array[j]);
		/*pivotとjを入れ替える*/
		swap(&Array[pivot],&Array[j]);

		/*再帰関数*/
		puts("再帰関数");
		/*pivより小さい時 */
		quicksort(Array, left, j-1);

		puts("再帰関数");
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
    
    printf("%2f秒かかりました",(double)(end-start)/CLOCKS_PER_SEC); 

    return 0;
}