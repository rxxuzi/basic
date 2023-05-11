#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define count 2000

void swap(int *x , int *y){
   int tmp = *x;
   *y = *x;
   *x = tmp;

}
void Q(int arr[], int min , int max){
   if(min < max){
      int pivot = min;
      int i = min;
      int j = max ;
      while (i < j)
      {
         while (arr[i] <= arr[pivot] && max)
         {
            i++;
         }
         while (arr[j] > arr[pivot])
         {
            j--;
         }
         if (arr[i] > arr[j])
         {
            swap(&arr[i],&arr[j]);
         }      
         
      }
      swap(&arr[pivot] , &arr[j]);
      Q(arr , min , j + 1);
      Q(arr , j -1 , max);
      
   }
}
int main(){
   int arr[count] ;
   for (size_t i = 0; i < count; i++)
   {
      arr[i] = rand();
   }
    
   Q(arr, 0 ,count -1);
   for (size_t i = 0; i < count; i++){
      printf("%d",arr[i]);
   }
   
   return 0;
}