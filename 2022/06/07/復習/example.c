#include <stdio.h>
#include <stdlib.h>
#define count 100
int main(void){
    int *p; 
    int arr[10];
    p = &arr[0];
    
    for (int i = 0; i < count; i++){
        *(p+i) = i;
    }
    
    
    printf("%d",*(p+2));
    
    
    return 0;
    
}