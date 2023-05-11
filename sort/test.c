#include <stdio.h>
#include <stdio.h>
#define N 20000
#include <time.h>
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void sort (int *s,int n){
    int i,j,tmp;
    for(int i = 0 ; i < n ; i ++){
        j=i;
        while ((j>0 )&& (s[j-1] > s[j])){
            swap(&s[j-1] , &s[j]);
         j--;
        }
    }
    
    
}
void view(int *s){
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",s[i]);
    }
    
}
int main(void){
    int arr[] = {2,5,4,3,7,1,9,8,0,6};
    view(arr);
    puts("");
    sort(arr,10);
    view(arr);
    return 0;


}