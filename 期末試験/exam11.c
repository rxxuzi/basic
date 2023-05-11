/*Šî”ƒ\[ƒg*/
#include <stdio.h>
#include <math.h>
static int count = 100;

int main(void){
    int arr[100];
    for (size_t i = 0; i < count; i++)
    {
        arr[i] = (rand() % 1000);
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%4d,",arr[i]);
    }
    return 0;
    
}