#include <stdio.h>
#define N 5
int main(void){
    int arr[N] = {2, 3, 4, 5, 1};
    int temp = arr[0];
    for (size_t i = N; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for (size_t i = 0; i < N; i++)
    {
        printf("%d",arr[i]);
    }
    return 0 ;
    
    
}