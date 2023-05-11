#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
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
 * 
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
			}
			while(Array[j] > Array[pivot]){
				j--;
			}
			if (i<j){
				swap(&Array[i],&Array[j]);
			}
		}
		/*pivotとjを入れ替える*/
		swap(&Array[pivot],&Array[j]);
		/*再帰関数でpivotを再定義しながら比べていく*/
		quicksort(Array, left, j-1);
		quicksort(Array, j+1, right);
	}
}

int main(void){
    int count, Array[N] ,r ; clock_t start,end;
	count =N;
	/*乱数設定*/
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
    
    printf("%2f秒かかりました",(double)(end-start)/CLOCKS_PER_SEC); 

    return 0;
}