#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000
static int max = 100000;
/**
 * @brief 
 * @param arr main �֐����玝���Ă����֐�
 * @return ** void 
 */
void radixsort(int arr[]){
  int k = 0;
  int rad[N]; /*������܂��f�[�^*/
  int buckets[N]; /*�o�P�b�g*/
  for(int m = 1 ; m < max ; m *= 10){/*m�̌����������Ȃ��烋�[�v������ */
    for (size_t i = 0; i < N; i++){
      rad[i] = (arr[i] / m)% 10;
    }
    k = 0;      /*�z��̓Y��*/
    for (size_t i = 0; i <= 9; i++){/*���0 ~ 9*/
      for (size_t j = 0; j < N; j++){
        if(rad[j] == i){
          buckets[k++] = arr[j]; /*�o�P�b�g�ɃR�s�[*/
        }
      }
    }
    for (size_t i = 0; i < N; i++){
      arr[i] = buckets[i]; /*arr[]�ɃR�s�[*/
    }
  }
  
  
}

void showData(int arr[]){for (size_t i = 0; i < N; i+= max/1000)printf("%5d\n" ,arr[i]);}


int main (void){
  int Array[N];
  time_t s,f;
  
  srand((unsigned int)time(NULL));
  for (size_t i = 0; i < N; i++){
    Array[i] = rand()%max;
  }
  puts("Before Sort");
  showData(Array);
  s=clock();  
  radixsort(Array);
  f=clock();
 
  puts("\nAfter Sort");
  showData(Array);
 
   printf("\n%2f�b������܂���",(double)(f-s)/CLOCKS_PER_SEC); 
  return 0;
}